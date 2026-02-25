#include <stdio.h>
#include <stdlib.h>

int main(){

    int iJ, iI;
    iJ = 17;
    iI = 60;

    int idade;
    idade = 0;

    printf("\nDigite a idade de uma pessoa: ");
    scanf("%d", &idade);

    if (idade<=iJ){
        printf("\nA idade que você digitou é de um JOVEM! ");
    }
    else if ((idade>iJ) && (idade<iI)){
        printf("A idade que você digitoy é de um ADULTO!! ");   
    }
    else{
        printf("A idade que você digitou é de um IDOSO!! ");
    }
    
    return 0;
}