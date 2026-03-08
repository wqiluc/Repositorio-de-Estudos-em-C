#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    char nomeusuario[50];
    int idadeusuario;
    float pi;
    bool respusario;

    printf("\nDigite o nome do usuário: ");
    scanf("%s", nomeusuario);

    printf("Digite a idade do usuário: ");
    scanf("%d", idadeusuario);

    printf("Digite o número de pi: ");
    scanf("%f", pi);

    return 0;

}