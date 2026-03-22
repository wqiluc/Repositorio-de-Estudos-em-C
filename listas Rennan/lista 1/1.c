// Questão 1:
// O que o código a seguir retorna?

#include <stdio.h>

int main() {
    int contador = 1;
    while (contador <= 10) {
        printf("%s\n", contador % 2 ? "****" : "++++++++");
        ++contador;
    }
    return 0;
}

// O programa acima realiza um contador. Inicializando do 1, ele repete enquanto esse contador for menor ou igual a 10, e faz uma condição:
// se for divisível por 2, ele vira "****", se não: "++++++++"
// (ps: Usando a estrutura ?: - tipo de if/else)