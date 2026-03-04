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

    while (quantidadeproduto <1){
        printf("\n Quantidade do produto invalida! Digite uma quantidade maior que 0.");
        printf("\n Digite a quantidade do produto: ");
        scanf("%d", &quantidadeproduto);
    }

    if (codigoproduto >=1 && codigoproduto <=10){
        valorproduto = 10.00;
    } else if (codigoproduto >=11 && codigoproduto <=20){
        valorproduto = 15.00;
    } else if (codigoproduto >=21 && codigoproduto <=30){
        valorproduto = 20.00;
    } else {
        valorproduto = 30.00;
    }

    valorfinal = quantidadeproduto * valorproduto;
    
    if(valorfinal <=250){
        valorfinal = valorfinal * 0.95; // Aplica desconto de 5%
    }
    else if (valorfinal >250 && valorfinal <=500){
        valorfinal = valorfinal * 0.90; // Aplica desconto de 10%
    }
    else {
        valorfinal = valorfinal * 0.85; // Aplica desconto de 15%
    }

    printf("\n O valor final do produto é: R$%.2f\n", valorfinal);

    return 0;
}