/*

Questão 4

Desenvolva um programa em C que determine se um cliente de uma loja de departamentos excedeu o limite de crédito de sua conta. 

Os seguintes dados de cada cliente estão disponíveis:

Número da conta;
Saldo devedor no início do mês;
Total de itens cobrados do cliente no mês em questão;
Total de créditos aplicados à conta do cliente no mês em questão; e
Limite de crédito permitido.

O programa deve receber esses dados, calcular o novo saldo
( = saldo devedor inicial + cobranças − créditos )

e determinar se o novo saldo supera o limite de crédito do cliente.
Para os clientes cujo limite de crédito foi excedido, o programa deve exibir:

o número da conta do cliente;
o limite de crédito;
a mensagem "Limite de Crédito Excedido".

*/

#include <stdio.h>
#include <stdbool.h>
int main(){

    int numerodaConta;
    float saldoInicio, saldoNovo = 0;
    float cobrancas;
    float totalCredito, limiteCredito;

    while (true){
        printf("\n Entre com o número da conta: ");
        scanf("%d", &numerodaConta);
        if(numerodaConta==-1){
            break;
        }
        else{
            printf("\n\nEntre com o Saldo Inicial: ");
            scanf("%f", &saldoInicio);

            printf("Entre com o Total de Cobranças: ");
            scanf("%f", &cobrancas);

            printf("Entre com o total de crédito: ");
            scanf("%f", &totalCredito);

            printf("Entre com o Limite de crédito: ");
            scanf("%f", &limiteCredito);
        
            saldoNovo += (saldoInicio+cobrancas-totalCredito);
        
            if (saldoNovo>limiteCredito){
                printf("\nConta:\t%d\n", numerodaConta);
                printf("\nLimite de Crédito:\t%.2f\n", limiteCredito);
                printf("\nLimite de Crédito Excedido!! ❌");
                printf("\nO saldo devedor do cliente é de: R$%.2f", saldoNovo);
                saldoNovo-=saldoNovo;
            }    
        }
    }
    printf("\nEncerrando Sistema!! Obrigado por consultar conosco ❤️\n");
    return 0;
}