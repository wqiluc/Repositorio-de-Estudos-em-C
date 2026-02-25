/*  PRINCIPAIS BIBLIOTECAS DA LINGUAGEM C
    E PARA QUE SERVEM */

#include <stdio.h>      // Entrada e saída padrão (printf, scanf, getchar, puts)
#include <stdlib.h>     // Alocação de memória, conversões, rand, exit
#include <string.h>     // Manipulação de strings (strcmp, strcpy, strlen)
#include <math.h>       // Funções matemáticas (sqrt, pow, sin, cos)
#include <ctype.h>      // Manipulação de caracteres (toupper, tolower, isdigit)
#include <time.h>       // Manipulação de tempo e data (time, clock)
#include <stdbool.h>    // Tipo booleano (bool, true, false)
#include <limits.h>     // Limites de tipos (INT_MAX, CHAR_BIT)
#include <float.h>      // Limites de float e double
#include <assert.h>     // Testes e validações (assert)

int main() {

    printf("=== PRINCIPAIS BIBLIOTECAS EM C ===\n\n");

    printf("stdio.h  -> Entrada e saida de dados\n");
    printf("stdlib.h -> Memoria, conversoes, controle do programa\n");
    printf("string.h -> Manipulacao de strings\n");
    printf("math.h   -> Calculos matematicos\n");
    printf("ctype.h  -> Verificacao e alteracao de caracteres\n");
    printf("time.h   -> Trabalhar com data e hora\n");
    printf("stdbool.h-> Tipo booleano (true/false)\n");
    printf("limits.h -> Limites dos tipos inteiros\n");
    printf("float.h  -> Limites dos tipos decimais\n");
    printf("assert.h -> Testes e depuracao\n");
    
    return 0;
}