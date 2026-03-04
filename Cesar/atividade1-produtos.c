#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigoproduto, quantidadeproduto;
    float valorproduto, valorfinal;

    printf("\n Digite o codigo do produto: ");
    scanf("%d", &codigoproduto);

    while (codigoproduto <1 || codigoproduto > 40){
        printf("\n Codigo` do produto invalido! Digite um codigo entre 1 e 40.");
        printf("\n Digite o codigo do produto: ");
        scanf("%d", &codigoproduto);
    }

    printf("\n Digite a quantidade do produto: ");
    scanf("%d", &quantidadeproduto);

    printf("\n Digite o valor do produto: ");
    scanf("%f", &valorproduto);

    valorfinal = quantidadeproduto * valorproduto;

    printf("\n O valor do produto sem o desconto e sem código é: R$%.2f\n", valorfinal);

    if(codigoproduto>=1 && codigoproduto<=10){
        valorfinal = valorfinal + 10;
    } else if (codigoproduto>=11 && codigoproduto<=20){
        valorfinal = valorfinal + 15;
    } else if (codigoproduto>=21 && codigoproduto<=30){
        valorfinal = valorfinal + 20;
    } else if (codigoproduto>=31 && codigoproduto<=40){
        valorfinal = valorfinal + 30;
    }

    printf("\n O valor do produto sem o desconto e com o código é: R$%.2f\n", valorfinal);

    if (valorfinal<=250){
        valorfinal = (valorfinal)+(valorfinal*0.05);   
    } else if(valorfinal>250 && valorfinal<=500){
        valorfinal = (valorfinal)+(valorfinal*0.10);
    } else if(valorfinal>500){
        valorfinal = (valorfinal)+(valorfinal*0.15);
    }

    printf("\n O valor final do produto é: R$%.2f\n", valorfinal);

}