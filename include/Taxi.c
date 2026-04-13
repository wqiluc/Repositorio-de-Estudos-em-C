#include <stdio.h>
#include <string.h>

#define TAM_NOME 100
#define DIAS_UTEIS 5

typedef struct {
    char nomeMotorista[TAM_NOME];
    float ganhosMotorista[DIAS_UTEIS];
}Taxi;

#define META_GANHOS 100

int main(void)
{
    Taxi meuTaxi;
    float media = 0, total = 0;
    int motorista;

    printf("\n\t Digite o nome do motorista: ");
    scanf("%s%*c", meuTaxi.nomeMotorista);

    for (motorista = 0; motorista < DIAS_UTEIS; motorista++) {
        printf("\n\t Digite os ganhos do motorista no %dº dia: ", motorista + 1);
        scanf("%f", &meuTaxi.ganhosMotorista[motorista]);
        total += meuTaxi.ganhosMotorista[motorista];
    }
    media = total / DIAS_UTEIS;

    printf("\n\t O nome do motorista é: %s", meuTaxi.nomeMotorista);
    printf("\n\t A média de ganhos do motorista é: %.2f", media);

    for (motorista = 0; motorista < DIAS_UTEIS; motorista++) 
    {
        printf("\n\t Ganhos do motorista no %dº dia: %.2f", motorista + 1, meuTaxi.ganhosMotorista[motorista]);

        if(meuTaxi.ganhosMotorista[motorista] > META_GANHOS)
        {
            printf("\n\t O motorista ultrapassou a meta de ganhos no %dº dia.", motorista + 1);
        }
        else
        {
            printf("\n\t O motorista não ultrapassou a meta de ganhos no %dº dia.", motorista + 1);
        }
    }

    return 0;
}