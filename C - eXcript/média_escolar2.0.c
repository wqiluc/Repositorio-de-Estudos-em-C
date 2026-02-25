#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Faça uma média escolar 2.0, 
mas dessa vez utilize, 4 notas (1º e 2º bimestre),
e faça a média de ambos os semestres!!  */

int main(){

    printf("===== Media Escolar 2.0 🏫 =====");

    float nota1, nota2, nota3, nota4;

    printf("\nDigite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);

    float media_primeiro_bimestre;
    media_primeiro_bimestre = (nota1 + nota2) / 2;

    printf("\nA media do 1º bimestre foi de: %.1f\n", media_primeiro_bimestre);

    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);

    printf("Digite a 4ª nota: ");
    scanf("%f", &nota4);

    float media_segundo_bimestre;
    media_segundo_bimestre = (nota3 + nota4) / 2;

    printf("\nAs medias desse aluno foram:\n");
    printf("Primeiro Bimestre: %.1f\n", media_primeiro_bimestre);
    printf("Segundo Bimestre: %.1f\n", media_segundo_bimestre);

    float media_geral;

    media_geral = (media_primeiro_bimestre+media_segundo_bimestre)/2;

    printf("\n A média geral desse aluno foi de: %.1f", media_geral);

    /* Condições de média: 
    1 - se ela for maior ou igual a 7, Aprovado✅;
    2 - se ela for menor que 7 E maior que 3, Recuperação Global⚠️; e
    3 - se ela for menor que 3, Reprovado!! ❌*/

    if(media_geral>=7){
        printf("\nSua média foi maior que 7! Aprovado!! ✅");
    }
    else if((media_geral<7)&&(media_geral>3)){
        printf("Sua média está entre 6 e 3! Recuperação Global!! ⚠️");
    }
    else{
        printf("Sua média está abaixo de 3!! Reprovado!! ❌");
    }

    return 0;
}