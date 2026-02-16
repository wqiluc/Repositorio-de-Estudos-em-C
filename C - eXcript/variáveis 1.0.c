#include <stdio.h>

/*
Aprendendo sobre variáveis, seus tipos e como trabalhar
com elas na linguagem C

1) TODA variável possuí um nome;
2) TODA variável possuí um tipo;
3) TODA variável possuí um tamanho; e
4) TODA variável possuí um valor; e
    4.1) esse valor é TEMPORÁRIO; 
    4.2) quando o computador for desligado ou o programa é fechado, esse dado é perdido;
    4.3) os valores são VOLÁTEIS.
5) o NOME de uma variável NÃO PODE COMEÇAR com números.
(use _)
*/

int main(){

    int inteiro = 0;
    float flutuante = 0;
    inteiro = 10; // eu indiquei um valor pra ela;
    flutuante = 10.5; // eu indiquei um valor pra ela.
    printf("%d",inteiro);
    printf("\n%f",flutuante);

    return 0;
};