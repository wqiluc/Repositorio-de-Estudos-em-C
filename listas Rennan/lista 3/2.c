#include <stdio.h>

#define TAMANHO_VETOR 7

int main(void) {
    int valoresMatriz[TAMANHO_VETOR] = {4, -1, 2, 3, -3, 7, 9};
    int somaPositivos = 0, indice = -1, contagem = 0, mediaFinal = 0;

    while (indice < 5) {
        if (valoresMatriz[++indice] <= 0)
            continue;
        
        somaPositivos += valoresMatriz[indice];
        contagem++;
    }

    mediaFinal = (contagem == 0) ? 0 : (somaPositivos / contagem);
    printf("%d", mediaFinal); // Saída: 4
    return 0;
}