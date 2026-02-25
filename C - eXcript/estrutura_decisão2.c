#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /* = Atribuição; == Comparação; != Falso;*/

    int numero = 10;

    printf("%i\n", numero==1);
    printf("\n\t%i\n", !(numero==1)); /* '!' é o parâmetro NOT */

    printf("\nDigite um número que seja diferente de 5 (!=5): \n");
    scanf("%d", &numero);

    if (numero!=5){
        printf("A expressão é: \n");
        printf("True\n");
    } else{
        printf("A expressão é: \n");
        printf("False\n");
    }

    /*Comparação Positiva --> x == y (==);*/
    /*Comparação Negativa --> x != y (!=);*/

    return 0;
}