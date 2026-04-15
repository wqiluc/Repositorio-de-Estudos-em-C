#include <stdio.h>

#define DIMENSAO 3

int main(void) {
    int matrizQuadrada[DIMENSAO][DIMENSAO] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int somaDiagonal = 0;

    for (int i = 0; i < DIMENSAO; i++) {
        somaDiagonal += matrizQuadrada[i][i];
    }

    printf("%d", somaDiagonal); // Saída: 6
    return 0;
}