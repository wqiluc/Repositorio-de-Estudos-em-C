#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    // Declaração da variável para armazenar o nome
    char nome_usuario[50];

    // Entrada do nome (não aceita espaço)
    printf("\nDigite o nome do usuário: ");
    scanf("%s", nome_usuario);

    // Exibição do nome digitado
    printf("\nO nome do usuário é: %s\n", nome_usuario);

    // Declaração das variáveis numéricas
    int numero1, numero2, soma, sub, mult;
    int divA, divB, restdivA, restdivB;

    // Entrada dos números
    printf("Digite o número 1: ");
    scanf("%d", &numero1);

    printf("Digite o número 2: ");
    scanf("%d", &numero2);

    // =====================
    // Soma
    // =====================
    soma = numero1 + numero2;
    printf("A soma entre os números é: %d\n", soma);

    // =====================
    // Subtração
    // =====================
    if(numero1 < numero2){
        sub = numero1 - numero2;
        printf("A subtração entre os números É NEGATIVA!! = %d\n", sub);
    }else{
        sub = numero1 - numero2;
        printf("A subtração entre os números É POSITIVA! = %d\n", sub);
    }

    // =====================
    // Multiplicação
    // =====================
    mult = numero1 * numero2;
    printf("A multiplicação entre os dois números é: %d\n", mult);

    // =====================
    // Divisão (evitando divisão por zero)
    // =====================
    if(numero2 != 0){
        
        divA = (numero1 / numero2);
        printf("Resultado da divisão A (numero1/numero2): %d\n", divA);

        restdivA = numero1 % numero2;
        
        printf("Resto da divisão A: %d\n", restdivA);
    } else {
        printf("Não é possível dividir numero1 por zero.\n");
    }

    if(numero1 != 0){

        divB = (numero2 / numero1);
        printf("Resultado da divisão B (numero2/numero1): %d\n", divB);

        restdivB = numero2 % numero1;

        printf("Resto da divisão B: %d\n", restdivB);
    } else {
        printf("Não é possível dividir numero2 por zero.\n");
    }

    return 0;   
}