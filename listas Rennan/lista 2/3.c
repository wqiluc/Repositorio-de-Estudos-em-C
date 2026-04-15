#include <stdio.h>

int main() {
    int vetA[10], vetB[10];
    int i;

    // Inicialização (Linhas 10 a 15)
    for (i = 0; i < 10; i++) {
        vetB[i] = 0;
        if (i % 2 == 0) {
            vetA[i] = i;
        } else {
            vetA[i] = 2 * i;
        }
    }
    // a) Resposta: vetA ao término da linha 15: {0, 2, 2, 6, 4, 10, 6, 14, 8, 18}
    //    Resposta: vetB ao término da linha 15: {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

    // Processamento (Linhas 18 a 22)
    for (i = 0; i < 10; i++) {
        while (vetA[i] > i) {
            vetB[i] = vetA[i];
            vetA[i] = vetA[i] - 1;
        }
    }
    // b) Resposta: vetA ao término da linha 22: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    //    Resposta: vetB ao término da linha 22: {0, 2, 0, 4, 0, 6, 0, 8, 0, 10}

    return 0;
}