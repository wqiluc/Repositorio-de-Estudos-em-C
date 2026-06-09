#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct
{
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *p, float percentual);
void imprimir_produtos(Produto *ponteiro, int qtd);

#endif