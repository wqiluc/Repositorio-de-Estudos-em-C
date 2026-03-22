/*

Questão 5:

Uma grande companhia de produtos de beleza paga suas consultoras por comissão. 

As consultoras recebem R$150,00 por mês mais 10 por cento de suas vendas brutas naquele mês.

Por exemplo, uma consultora que vender o equivalente a R$15.000,00 em produtos de beleza em um mês recebe R$150,00 mais 10 por cento de R$15.000,00, ou um total de R$1.650,00.

Desenvolva um programa em C que receba as vendas brutas de cada consultora no último mês, calcule sua comissão e o exiba. Processe os dados de uma consultora de cada vez.

*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    float venda;
    float comissaoFixa = 150;
    float comissaoPorcentagem = 0;
    float vendaFinal = 0;

    while (true){
        printf("\nEntra com a venda em reais - R$ (-1 para sair): ");
        scanf("%f", &venda);
        if(venda==-1){
            break;
        }
        else{
            comissaoPorcentagem = (0.10*venda);
            vendaFinal = comissaoFixa+comissaoPorcentagem;
            printf("\nA comissão final é de: R$%.2f", vendaFinal);
            continue;
        }
        return 0;
    }
}