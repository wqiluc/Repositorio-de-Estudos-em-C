/* OPERADORES LÓGICOS E RELACIONAIS EM C */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    /* ================= == (IGUAL) ================= */
    if (numero == 10) {
        printf("== : O numero é igual a 10\n");
    }

    /* ================= != (DIFERENTE) ================= */
    if (numero != 10) {
        printf("!= : O numero é diferente de 10\n");
    }

    /* ================= > (MAIOR QUE) ================= */
    if (numero > 10) {
        printf("> : O numero é maior que 10\n");
    }

    /* ================= < (MENOR QUE) ================= */
    if (numero < 10) {
        printf("< : O numero é menor que 10\n");
    }

    /* ================= >= (MAIOR OU IGUAL) ================= */
    if (numero >= 10) {
        printf(">= : O numero é maior ou igual a 10\n");
    }

    /* ================= <= (MENOR OU IGUAL) ================= */
    if (numero <= 10) {
        printf("<= : O numero é menor ou igual a 10\n");
    }

    int idade;
    float nota;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    /* ================= E (&&) ================= */
    if (idade >= 18 && nota >= 7) { /* && em C é o 'and' do Python */
        printf("Voce é maior de idade E foi aprovado\n");
    } else {
        printf("Nao atende as duas condicoes ao mesmo tempo\n");
    }

    /* ================= OU (||) ================= */
    if (idade < 18 || nota < 7) { /*|| em C é o 'or' do Python */
        printf("Voce é menor de idade OU foi reprovado\n");
    } else {
        printf("Voce é maior de idade OU foi aprovado\n");
    }

    return 0;
}