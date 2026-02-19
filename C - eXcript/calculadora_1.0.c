#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1,numero2,soma,sub,mult,div,resdiv;
    scanf("%d %d", &numero1,&numero2);

    printf("Digite dois números: ");
    soma = (numero1 + numero2);
    sub = (numero1-numero2);
    mult = (numero1*numero2);
    div = (numero1/numero2);
    resdiv = (numero1%numero2);

    printf("A soma é: %d\n", soma);
    printf("A subtração é de: %d",sub);
    printf("A multiplicacão é de: %d" ,mult);
    printf("A divisão é de: %d", div);

    return 0;
}