#include <stdio.h>
#include <stdlib.h>
#include "../app/include/produto.h"

static void aplicar_desconto_float(float *preco, float percentual)
{
    *preco -= *preco * (percentual / 100.0f);
}

static void cabecalho(const char *titulo)
{
    printf("\n════════════════════════════════════════════\n");
    printf("  %s\n", titulo);
    printf("════════════════════════════════════════════\n\n");
}

int main(void)
{
    /* ─────────────────────────────────────────────────────────────
       Atividade 1 — Fundamentos de Ponteiros e Modificação Direta
       Declara float, aponta ponteiro, aplica +10% exclusivamente
       pelo ponteiro e imprime a variável original modificada.
    ───────────────────────────────────────────────────────────── */
    cabecalho("Atividade 1 - Ponteiros e Modificacao Direta");

    float preco = 100.0f;
    float *ponteiro = &preco;

    printf("  Endereco de preco : %p\n", (void *)ponteiro);
    printf("  Preco original    : R$ %.2f\n", preco);

    *ponteiro *= 1.10f;

    printf("\n Preco apos +10%%   : R$ %.2f\n", preco);

    /* ─────────────────────────────────────────────────────────────
       Atividade 2 — Passagem por Referência
       Encapsula a lógica em aplicar_desconto_float, recebendo
       float* e percentual. Altera o valor diretamente na memória.
    ───────────────────────────────────────────────────────────── */
    cabecalho("Atividade 2 - Passagem por Referencia");

    float preco2 = 100.0f;

    printf("\n\t Preco antes do desconto (15%%): R$ %.2f\n", preco2);
    aplicar_desconto_float(&preco2, 15.0f);
    printf("\n\t Preco após o desconto (15%%): R$ %.2f\n", preco2);

    /* ─────────────────────────────────────────────────────────────
       Atividade 3 — Ponteiros para Structs
       Produto agora é uma struct {id, preco}. aplicar_desconto
       recebe Produto* e usa o operador -> para modificar preco.
    ───────────────────────────────────────────────────────────── */
    cabecalho("Atividade 3 - Ponteiros para Structs");

    Produto p3 = {1, 250.0f};

    printf("\n Produto id=%-4d | Preço antes (20%% desc.): R$ %.2f\n", p3.id, p3.preco);
    aplicar_desconto(&p3, 20.0f);
    printf("\n Produto id=%-4d | Preo após: R$ %.2f\n", p3.id, p3.preco);

    /* ─────────────────────────────────────────────────────────────
       Atividade 4 — Aritmética de Ponteiros em Arrays
       Array estático de 3 Produtos. imprimir_produtos percorre
       via (ptr + i)->campo, sem usar a sintaxe ptr[i].
    ───────────────────────────────────────────────────────────── */
    cabecalho("Atividade 4 - Aritmetica de Ponteiros em Arrays");

    Produto estoque[3] = {{1, 50.0f}, {2, 120.0f}, {3, 300.0f}};

    printf("\n Estoque antes dos descontos:");
    imprimir_produtos(estoque, 3);

    aplicar_desconto(estoque, 10.0f);
    aplicar_desconto(estoque + 1,  5.0f);
    aplicar_desconto(estoque + 2, 25.0f);

    printf("\n Estoque apos os descontos:");
    imprimir_produtos(estoque, 3);

    /* ─────────────────────────────────────────────────────────────
       Atividade 5 — Alocação Dinâmica de Memória (malloc / free)
       Tamanho definido pelo usuário em tempo de execução.
       Preenchimento via aritmética de ponteiros, sem colchetes.
    ───────────────────────────────────────────────────────────── */
    cabecalho("Atividade 5 - Alocacao Dinamica (malloc / free)");

    int produtos;
    printf("\n Quantos produtos deseja cadastrar? ");

    if (scanf("%d", &produtos) != 1 || produtos <= 0)
    {
        printf("  Quantidade invalida.\n");
        return EXIT_FAILURE;
    }

    Produto *lista = malloc((size_t)produtos * sizeof(Produto));

    if (!lista)
    {
        printf("  Erro: falha na alocacao de memoria.\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < produtos; i++)
    {
        (lista + i)->id = i + 1;
        printf("  Produto %d — Informe o preco: R$ ", i + 1);
        scanf("%f", &(lista + i)->preco);
    }

    printf("\n Produtos cadastrados:");
    imprimir_produtos(lista, produtos);

    free(lista);
    printf("  Memoria liberada com sucesso.\n\n");

    return EXIT_SUCCESS;
}