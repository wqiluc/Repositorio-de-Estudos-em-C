#include <stdio.h>

typedef struct
{   int codigo;
    float preco;
}PRODUTO;

#define QTD_PRODUTO 2

int main(void)
{
    PRODUTO produto[QTD_PRODUTO];
    int i;
    float total;
    produto[0].codigo = 2;
    produto[0].preco = 15.00;
    produto[1].codigo = 1;
    produto[1].preco = 20;

    for(i = 0; i < QTD_PRODUTO; i++)
    {
        total += (produto[i].codigo * produto[i].preco);
    }

    printf("O total desse produto é de: %.2f", total);

}