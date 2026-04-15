#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main(void)
{
    int s = 0;
    int matriz[LINHAS][COLUNAS], i, j;

    for(i = 0; i < LINHAS; i++)
    {
        for(j = 0; j < COLUNAS; j++)
        {
            if(i == j)
            {
                matriz[i][j] = 2;
            }
            else
            {
                matriz[i][j] = 1; 
            }
            s += matriz[i][j];
        }
    }

    printf("A soma de todos os elementos é de: %d\n", s);

    return 0;
}