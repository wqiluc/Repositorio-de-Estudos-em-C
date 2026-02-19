#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    =====================================================
    OPERAÇÕES MATEMÁTICAS EM C
    =====================================================

    Em C, os principais operadores aritméticos são:

    +  -> Adição
    -  -> Subtração
    *  -> Multiplicação
    /  -> Divisão
    %  -> Resto da divisão (módulo)

    Incremento e Decremento:
    ++ -> Incrementa 1
    -- -> Decrementa 1

    Ordem de precedência:
    1º ()  -> Parênteses
    2º * / %
    3º + -

    */

    // -------------------------------------------------
    // ADIÇÃO
    // -------------------------------------------------

    int numero1 = 15;
    int numero2 = 20;

    int soma = numero1 + numero2;

    printf("Adição: %d + %d = %d\n", numero1, numero2, soma);


    // -------------------------------------------------
    // SUBTRAÇÃO
    // -------------------------------------------------

    int subtracao = numero2 - numero1;

    printf("Subtração: %d - %d = %d\n", numero2, numero1, subtracao);


    // -------------------------------------------------
    // MULTIPLICAÇÃO
    // -------------------------------------------------

    int numero3 = 5;
    int numero4 = 2;

    int multiplicacao = numero3 * numero4;

    printf("Multiplicação: %d * %d = %d\n", numero3, numero4, multiplicacao);


    // -------------------------------------------------
    // DIVISÃO INTEIRA
    // -------------------------------------------------

    int numero5 = 30;
    int numero6 = 2;

    int divisao = numero5 / numero6;

    printf("Divisão inteira: %d / %d = %d\n", numero5, numero6, divisao);

    /*
    IMPORTANTE:
    Quando usamos int, a divisão é inteira.
    Se o resultado for decimal, ele será truncado.
    */


    // -------------------------------------------------
    // DIVISÃO COM DECIMAL (FLOAT)
    // -------------------------------------------------

    float numero7 = 5;
    float numero8 = 2;

    float divisao_decimal = numero7 / numero8;

    printf("Divisão decimal: %.2f / %.2f = %.2f\n", numero7, numero8, divisao_decimal);


    // -------------------------------------------------
    // RESTO DA DIVISÃO (MÓDULO)
    // -------------------------------------------------

    int resto = 10 % 3;

    printf("Resto da divisão: 10 %% 3 = %d\n", resto);

    /*
    O operador % retorna o resto da divisão inteira.
    Muito usado para:
    - verificar se número é par ou ímpar
    - ciclos
    */


    // -------------------------------------------------
    // INCREMENTO
    // -------------------------------------------------

    int contador = 5;

    contador++;  // contador = contador + 1

    printf("Incremento: %d\n", contador);


    // -------------------------------------------------
    // DECREMENTO
    // -------------------------------------------------

    contador--;  // contador = contador - 1

    printf("Decremento: %d\n", contador);


    // -------------------------------------------------
    // OPERADORES COMPOSTOS
    // -------------------------------------------------

    int valor = 10;

    valor += 5;  // valor = valor + 5
    printf("+= : %d\n", valor);

    valor -= 3;  // valor = valor - 3
    printf("-= : %d\n", valor);

    valor *= 2;  // valor = valor * 2
    printf("*= : %d\n", valor);

    valor /= 4;  // valor = valor / 4
    printf("/= : %d\n", valor);


    // -------------------------------------------------
    // PRECEDÊNCIA DE OPERADORES
    // -------------------------------------------------

    int resultado1 = 5 + 3 * 2;        // 5 + 6 = 11
    int resultado2 = (5 + 3) * 2;      // 8 * 2 = 16

    printf("Sem parênteses: 5 + 3 * 2 = %d\n", resultado1);
    printf("Com parênteses: (5 + 3) * 2 = %d\n", resultado2);


    /*
    RESUMO FINAL:

    - int -> divisão inteira
    - float/double -> divisão decimal
    - % -> resto da divisão
    - ++ e -- -> incremento e decremento
    - += -= *= /= -> operadores compostos
    - Use parênteses para controlar a ordem das operações
    */

    return 0;
}