/*

Questão 3:

Tendo em vista o alto preço da gasolina, os motoristas estão preocupados com a quilometragem percorrida por seus automóveis. Um motorista fez o controle “recompletando” várias vezes o tanque e registrando os quilômetros percorridos e os litros de gasolina necessários para encher o tanque.

a. Desenvolva um programa em C que receba como dados a quilometragem dirigida e os litros usados para “recompletar” o tanque.✅

b. O programa deve calcular e exibir a quilometragem por litro obtida para cada “recompletamento”.✅

c. Depois de processar todas as informações, o programa deve calcular e exibir a média de quilômetros por litro obtida para todos os “recompletamentos”.✅

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    float litrosCarro, kmCarro;
    float mediaCarro, somaMediaCarro = 0, mediaFinal;
    int contador = 0;

    while(true){
        printf("\nEntre com os Litros consumidos (-1 para finalizar): ");
        scanf("%f", &litrosCarro);
        if(litrosCarro == -1){
            break;
        }
        else{
            printf("Entre com os Km percorridos: ");
            scanf("%f", &kmCarro);

            mediaCarro = (kmCarro/litrosCarro);
            printf("A taxa de Km/L desse tanque foi de: %.2f\n", mediaCarro);

            somaMediaCarro += mediaCarro;
            ++contador;
        }
    }

    if(contador > 0){
        mediaFinal = somaMediaCarro / contador;
        printf("\nA taxa TOTAL de Km/L foi de: %.2f\n", mediaFinal);
    }

    return 0;
}