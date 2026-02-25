#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Exércicio: 
Faça uma Média escolar de um semestre tradicional:

Média = Nota1 + Nota2 / 2

SE a Média for <7, o Aluno foi Reprovado!! ❌
Caso Contrário, ele está Aprovado!! ✅*/

/*Resolução👇: */

int main(){

    printf("\n========== Média Escolar 🏫 ==========");

    float nota1,nota2;
    float media;

    printf("\n\nDigite a 1º nota do Aluno: ");
    scanf("%f", &nota1);
    printf("\nDigite a 2º nota do Aluno: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    printf("\nA média do Aluno é: %.1f", media);

    if (media<7){
        printf("\nA média do aluno é MENOR QUE 7. Aluno Reprovado! ❌\n");
    } 
    else {
        printf("\nA média do aluno é MAIOR QUE 7. Aluno Aprovado! ✅\n");
    }

    return 0;
}