#include <stdio.h>

#define INDICE_VETOR 5

int main(void)
{
    int vetor[INDICE_VETOR] = {2,4,6,8,10};
    int i;

    for(i = 0; i < INDICE_VETOR; i++)
    {
        vetor[i] = vetor[i] + vetor[i+1];
    }

    printf("%d", vetor[2]);

}