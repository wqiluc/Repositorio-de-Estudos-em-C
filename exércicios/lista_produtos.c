#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int qtdproduto;
    float valorproduto;
    float total = 0;
    char nomeproduto[50];
    char opcao;

    while (true){

        printf("\nDeseja iniciar a lista de compras? [S/N]: ");
        scanf("%c", &opcao);

        if (opcao == 's' || opcao == 'S'){

            printf("Digite o nome do produto: ");
            scanf("%s", nomeproduto);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &qtdproduto);

            printf("Digite o valor do produto: ");
            scanf("%f", &valorproduto);

            total += (qtdproduto * valorproduto);

        }

    }

    printf("O total da sua compra foi de: R$ %.2f\n", total);

    return 0;

}