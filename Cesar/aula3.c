/* COMPARAÇÃO == EM C COM scanf E printf */

#include <stdio.h>
#include <string.h>

int main() {

    /* ================= COMPARANDO INTEIRO ================= */

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 10) {
        printf("O numero é igual a 10\n");
    } else {
        printf("O numero nao é 10\n");
    }

    /* ================= COMPARANDO STRING ================= */

    char nome[50];

    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    if (strcmp(nome, "Lucas") == 0) {
        printf("O nome é Lucas\n");
    } else {
        printf("O nome nao é Lucas\n");
    }

    return 0;
}