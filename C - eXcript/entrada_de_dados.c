#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    -----------------------------------------------------
    ENTRADA DE DADOS COM SCANF EM C
    -----------------------------------------------------
    */

    int ano1, ano2;

    printf("Digite o ano 1: ");
    scanf("%d", &ano1);

    printf("Digite o ano 2: ");
    scanf("%d", &ano2);

    printf("Ano 1: %d\n", ano1);
    printf("Ano 2: %d\n", ano2);


    /*
    -----------------------------------------------------
    EXEMPLO COM STRING
    -----------------------------------------------------
    */

    char nome_do_usuario[50];

    printf("Digite seu nome: ");
    scanf("%s", nome_do_usuario);

    printf("O nome do usuário é: %s\n", nome_do_usuario);


    /*
    -----------------------------------------------------
    EXEMPLO COM FLOAT
    -----------------------------------------------------
    */

    float altura;

    printf("Digite sua altura (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Altura digitada: %.2f\n", altura);


    /*
    -----------------------------------------------------
    EXEMPLO COM CHAR
    -----------------------------------------------------
    */

    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra); 
    // espaço antes do %c evita problema com ENTER pendente

    printf("Letra digitada: %c\n", letra);


    return 0;
}