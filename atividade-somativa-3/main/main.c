#include <stdio.h>
#include <stdlib.h>
#include "../app/include/conta.h"
#include "../app/include/arquivo.h"

static void exibir_menu(void)
{
    printf("\n╔══════════════════════════════════════════╗\n");
    printf("║   🏦✨  SISTEMA DE CONTAS BANCÁRIAS  ✨🏦  ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║  1️⃣  👤  Cadastrar novo cliente            ║\n");
    printf("║  2️⃣  🔍  Consultar cliente por número      ║\n");
    printf("║  3️⃣  💰  Atualizar saldo                   ║\n");
    printf("║  4️⃣  🚫  Encerrar conta                    ║\n");
    printf("║  5️⃣  📋  Listar todos os clientes          ║\n");
    printf("║  6️⃣  🔄  Repetir listagem (rewind)         ║\n");
    printf("║  7️⃣  🚪  Encerrar programa                 ║\n");
    printf("╚══════════════════════════════════════════╝\n");
    printf("👉 Selecione uma opção: ");
}

int main(void) 
{
    printf("🚀 Inicializando o sistema bancário... \n");

    FILE *iniciar = fopen(ARQUIVO_BIN, "ab");
    if (!iniciar)
    {
        perror("❌  Erro ao inicializar arquivo");
        return EXIT_FAILURE;
    }

    fclose(iniciar);

    FILE *f_lista = arquivo_abrir("rb");

    int opcao;
    do 
    {
        exibir_menu();
        if (scanf("%d", &opcao) != 1) 
        {
            printf("❌  Entrada inválida. Digite novamente❌\n");
            break;
        }

        switch (opcao) 
        {
            case 1:
                conta_cadastrar();
                fclose(f_lista);
                f_lista = arquivo_abrir("rb");
                break;

            case 2: 
            conta_consultar(); 
            break;

            case 3:
                conta_atualizar_saldo();
                fclose(f_lista);
                f_lista = arquivo_abrir("rb");
                break;

            case 4:
                conta_encerrar();
                fclose(f_lista);
                f_lista = arquivo_abrir("rb");
                break;

            case 5:
                conta_listar(f_lista);
                break;

            case 6:
                printf("\n🔄  ── Relendo arquivo do início (rewind) ──\n");
                rewind(f_lista);
                conta_listar(f_lista);
                break;

            case 7:
                printf("\n👋  Encerrando o sistema. Até logo! 💙\n");
                printf("╔══════════════════════════════════════════╗\n");
                printf("║       🏦  Obrigado(a) por usar o sistema!   ║\n");
                printf("╚══════════════════════════════════════════╝\n");
                break;

            default:
                printf("⚠️ Opção inválida! Tente novamente. 🔁\n");
        }
    } 
    while 
        (opcao != 7);

    fclose(f_lista);
    return EXIT_SUCCESS;
}