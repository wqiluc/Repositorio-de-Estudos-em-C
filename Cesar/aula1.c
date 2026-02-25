#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    printf("Olá, Mundo!! \n\n");

    int numero1 = 10;
    int numero2 = 20;

    int soma = (numero1+numero2);
    int sub = (numero2-numero1);
    int mult = (numero1*numero2);
    int div = (numero2/numero1);
    int restdiv = (numero2%numero1);

    char nome_usuario[] = "Lucas";

    printf("A soma dos dois números é de: %d\n", soma);
    printf("A subtração dos dois números é de: %d\n", sub);
    printf("A multiplicação dos dois números é de: %d\n", mult);
    printf("A divisão inteira entre os dois números é de: %d\n", div);
    printf("O resto de divisão entre os dois números é de: %d\n\n", restdiv);
    printf("O nome do usuário é: %s", nome_usuario);

    return 0;
}