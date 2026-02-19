#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    =====================================================
    ESCAPE SEQUENCES (SEQUÊNCIAS DE ESCAPE) EM C
    =====================================================

    Escape sequences são combinações iniciadas com "\"
    usadas dentro de strings para representar caracteres
    especiais.

    Elas são muito utilizadas com printf, puts e strings.
    */


    // -------------------------------------------------
    // \n  -> Nova linha (quebra de linha)
    // -------------------------------------------------

    printf("Linha 1\n");
    printf("Linha 2\n\n");


    // -------------------------------------------------
    // \t  -> Tabulação (espaço de TAB)
    // -------------------------------------------------

    printf("Nome:\tLucas\n");
    printf("Idade:\t20\n\n");


    // -------------------------------------------------
    // \\  -> Barra invertida
    // -------------------------------------------------

    printf("Caminho do arquivo: C:\\Users\\Lucas\\Desktop\n\n");


    // -------------------------------------------------
    // \"  -> Aspas duplas dentro da string
    // -------------------------------------------------

    printf("Ele disse: \"Olá, mundo!\"\n\n");


    // -------------------------------------------------
    // \'  -> Aspas simples
    // -------------------------------------------------

    printf("Caractere de aspas simples: \'\n\n");


    // -------------------------------------------------
    // \r  -> Retorno de carro (volta ao início da linha)
    // -------------------------------------------------

    printf("12345\rABC\n\n");
    /*
    O \r faz o cursor voltar ao início da linha.
    "ABC" sobrescreve o começo de "12345".
    */


    // -------------------------------------------------
    // \b  -> Backspace (apaga caractere anterior)
    // -------------------------------------------------

    printf("ABC\bD\n\n");
    /*
    O \b apaga o caractere anterior.
    */


    // -------------------------------------------------
    // \a  -> Alerta sonoro (beep)
    // -------------------------------------------------

    printf("Som de alerta!\a\n\n");


    // -------------------------------------------------
    // \0  -> Caractere nulo (fim da string)
    // -------------------------------------------------

    char texto[] = "Oi\0Teste";
    printf("%s\n\n", texto);
    /*
    \0 indica o fim da string.
    O que estiver depois não será exibido.
    */


    /*
    =====================================================
    RESUMO DAS PRINCIPAIS ESCAPE SEQUENCES
    =====================================================

    \n  -> nova linha
    \t  -> tab
    \\  -> barra invertida
    \"  -> aspas duplas
    \'  -> aspas simples
    \r  -> retorno ao início da linha
    \b  -> backspace
    \a  -> alerta sonoro
    \0  -> fim da string

    */

    return 0;
}