#include <stdio.h>

int main(void) {
    int matriz[3][4];
    int i, j, c;

    c = 0;

    // Preenchimento inicial (Linhas 9 a 14)
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 3; j++) {
            c = c + 1;
            matriz[i][j] = c;
        }
    }

    // a) Resposta: Matriz ao término da linha 14:
    // 1   2   3   4
    // 5   6   7   8
    // 9  10  11  12

    // Processamento secundário (Linhas 16 a 21)
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 3; j++) {
            c = matriz[2][3]; // c recebe o valor 12
            matriz[i][j] = c;
        }
    }

    // b) Resposta: Matriz ao término da linha 21:
    // 12  12  12  12
    // 12  12  12  12
    // 12  12  12  12

    return 0;
}