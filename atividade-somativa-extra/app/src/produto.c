#include <stdio.h>
#include "../include/produto.h"

void aplicar_desconto(Produto *p, float percentual)
{
    p->preco -= p->preco * (percentual / 100.0f);
}

void imprimir_produtos(Produto *ponteiro, int qtd)
{
    printf("\n %-6s  %s\n", "ID", "Preco");
    printf("  ----------------------\n");

    for (int i = 0; i < qtd; i++) 
    {
        printf("  %-6d  R$ %.2f\n", (ponteiro + i)->id, (ponteiro + i)->preco);
    }

    printf("  ----------------------\n\n");
}