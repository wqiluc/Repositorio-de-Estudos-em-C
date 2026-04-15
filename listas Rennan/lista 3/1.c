#include <stdio.h>

#define LIMITE_ITERACAO 5

int main(void) {
    int numTermos = LIMITE_ITERACAO;
    int primeiroTermo = 0, segundoTermo = 1;
    int proximoTermo, contador, acumuladorD = 0;

    for (contador = 0; contador < numTermos; contador++) {
        if (contador <= 1) {
            proximoTermo = contador;
        } else {
            proximoTermo = primeiroTermo + segundoTermo;
            primeiroTermo = segundoTermo;
            segundoTermo = proximoTermo;
        }
        acumuladorD += proximoTermo;
    }

    printf("%d", acumuladorD); // Saída: 7
    return 0;
}