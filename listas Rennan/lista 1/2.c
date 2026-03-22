/*

Questão 2:
O que há de errado com o programa? E reescreva-o para dar certo como originalmente.

printf{"%d", ++(xx+y));

R = 
O erro na instrução printf{"%d", ++(xx + y)); é que o operador de incremento (++) só pode ser aplicado a uma variável (um L-value), e não ao resultado de uma expressão aritmética.

Por que não funciona? O computador consegue somar xx+y, mas o resultado dessa soma é um valor temporário na memória. O operador ++ tenta modificar e salvar o novo valor de volta no lugar original. Como (xx+y) não é um lugar físico (uma variável nomeada), o compilador gera um erro de "lvalue required".

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int xx = 5;
    int y = 10;
    printf("O Resultado é: %d\n", (xx+y)+1);
    return 0;
}