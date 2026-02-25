/*
    TOMADA DE DECISÃO EM C — EXEMPLO PRÁTICO
    Estruturas condicionais: if, else if, else
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* ================= IF SIMPLES ================= */

    int idade = 18;

    if (idade >= 18) {
        printf("Maior de idade\n");
    }

    /* ================= IF E ELSE ================= */

    int numero = 7;

    if (numero % 2 == 0) {
        printf("Numero par\n");
    } else {
        printf("Numero impar\n");
    }

    /* ================= IF, ELSE IF, ELSE ================= */

    float nota = 7.5;

    if (nota >= 9.0) {
        printf("Excelente\n");
    } else if (nota >= 7.0) {
        printf("Aprovado\n");
    } else if (nota >= 5.0) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    /* ================= IF ANINHADO ================= */

    int ano = 2024;

    if (ano % 4 == 0) {
        if (ano % 100 != 0 || ano % 400 == 0) {
            printf("Ano bissexto\n");
        } else {
            printf("Nao e bissexto\n");
        }
    } else {
        printf("Nao e bissexto\n");
    }

    /* ================= OPERADOR TERNARIO ================= */

    int saldo = 500;
    int saque = 300;

    (saldo >= saque) 
        ? printf("Saque realizado\n") 
        : printf("Saldo insuficiente\n");

    return 0;
}