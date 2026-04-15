#include <stdio.h>

int main() {
    int vetor[5] = {2, 0, 4, 3, 1};
    int i, j, a;

    // Algoritmo de ordenação
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= 3 - i; j++) {
            if (vetor[j] > vetor[j+1]) {
                a = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = a;
                
                // Linha 15: Impressão do estado do vetor após cada troca
                printf("%d %d %d %d %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);
            }
        }
    }

    /* Justificativa dos itens [cite: 88-93]:
       I.   Incorreto. Em i=0, j=1, o vetor é 0 2 4 3 1.
       II.  Incorreto. Em i=1, j=0, o vetor é 0 2 3 1 4.
       III. Correto. Em i=1, j=2, ocorre a troca entre 3 e 1, resultando em 0 2 1 3 4.
    */
    return 0;
}