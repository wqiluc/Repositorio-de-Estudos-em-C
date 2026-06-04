#include <stdio.h>
#include <string.h>
#include "../include/conta.h"
#include "../include/arquivo.h"

void conta_cadastrar(void) 
{
    long pos;
    printf("Posição no arquivo (0-based): ");
    scanf("%ld", &pos);

    if (pos < 0) {
        printf("Posição inválida. Use valores >= 0.\n");
        return;
    }

    FILE *tmp = fopen(ARQUIVO_BIN, "ab");
    if (tmp) 
    {  
        fclose(tmp);  
    } 

    else 
    {
        printf("Erro ao criar/verificar o arquivo de clientes. ❌\n");
        return;
    }

    FILE *file = arquivo_abrir("rb+");
    Cliente cliente;

    if (arquivo_ler(file, pos, &cliente) && cliente.numero != 0) 
    {
        printf("Posicao %ld ja ocupada pela conta %d. Operacao cancelada.\n",
               pos, cliente.numero);
        fclose(file);
        return;
    }

    printf("Numero da conta: ");
    scanf("%d", &cliente.numero);
    if (cliente.numero == 0) 
    {
        printf("Numero invalido (0 e reservado para posicao vazia).\n");
        fclose(file);
        return;
    }

    printf("\n\t Digite o nome do titular da conta: ");
    scanf(" %49[^\n]", cliente.nome);
    printf("Digite o Saldo inicial: R$ ");
    scanf("%lf", &cliente.saldo);

    arquivo_escrever(file, pos, &cliente);
    fclose(file);
    printf("Cliente cadastrado na posição %ld.\n", pos);
}

void conta_consultar(void) 
{
    int numero;
    printf("Número da conta: ");
    scanf("%d", &numero);

    FILE *file = arquivo_abrir("rb");
    long total = arquivo_total_registros(file);
    rewind(file);

    Cliente cliente;
    for (long i = 0; i < total; i++) 
    {
        fread(&cliente, sizeof(Cliente), 1, file);
        if (cliente.numero == numero) 
        {
            printf("\n--- Conta %d (posição %ld) ---\n", cliente.numero, i);
            printf("Nome  : %s\n", cliente.nome);
            printf("Saldo : R$ %.2f\n", cliente.saldo);
            fclose(file);
            return;
        }
    }
    printf("Conta %d não encontrada. ❌\n", numero);
    fclose(file);
}

void conta_atualizar_saldo(void) 
{
    int numero;
    printf("Número da conta: ");
    scanf("%d", &numero);

    FILE *file = arquivo_abrir("rb+");
    long total = arquivo_total_registros(file);
    rewind(file);

    Cliente cliente;
    for (long i = 0; i < total; i++) 
    {
        arquivo_ler(file, i, &cliente);
        if (cliente.numero == numero) 
        {
            printf("Saldo atual : R$ %.2f\n", cliente.saldo);
            printf("Novo saldo  : R$ ");
            scanf("%lf", &cliente.saldo);
            arquivo_escrever(file, i, &cliente);
            fclose(file);
            printf("Saldo atualizado com sucesso. ✅\n");
            return;
        }
    }
    printf("Conta %d não encontrada. ❌\n", numero);
    fclose(file);
}

void conta_encerrar(void) {
    int numero;
    printf("Número da conta a encerrar: ");
    scanf("%d", &numero);

    FILE *file = arquivo_abrir("rb+");
    long total = arquivo_total_registros(file);

    Cliente cliente;
    for (long i = 0; i < total; i++) 
    {
        arquivo_ler(file, i, &cliente);
        if (cliente.numero == numero) {
            memset(&cliente, 0, sizeof(Cliente));
            arquivo_escrever(file, i, &cliente);
            fclose(file);
            printf("Conta %d encerrada (posição %ld liberada).\n", numero, i);
            return;
        }
    }
    printf("Conta %d não encontrada. ❌\n", numero);
    fclose(file);
}

void conta_listar(FILE *file) 
{
    rewind(file);
    long total = arquivo_total_registros(file);
    rewind(file);

    printf("\n%-6s %-8s %-*s %s\n", "Pos", "Conta", NOME_MAX, "Nome", "Saldo");
    printf("--------------------------------------------------------------------\n");

    Cliente cliente;
    int encontrou = 0;
    for (long i = 0; i < total; i++) 
    {
        fread(&cliente, sizeof(Cliente), 1, file);
        if (cliente.numero != 0) 
        {
            printf("%-6ld %-8d %-*s R$ %.2f\n",
                   i, cliente.numero, NOME_MAX, cliente.nome, cliente.saldo);
            encontrou = 1;
        }
    }
    if (!encontrou) 
    {
        printf("Nenhuma conta cadastrada. ❌\n");
    }
    else 
    {
        printf("--------------------------------------------------------------------\n");
    }
}