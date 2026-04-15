#include <stdio.h>
#include <string.h>

#define TAMANHO_STRING 20

int main(void) {
    char stringOriginal[TAMANHO_STRING] = "Concurso";
    char stringCopia[TAMANHO_STRING];

    strcpy(stringCopia, stringOriginal);
    stringCopia[3] = '\0'; // Insere o caractere nulo, encerrando a string precocemente

    // Saída: Con - 8 (A cópia foi truncada, mas a original permanece intacta)
    printf("%s - %d\n", stringCopia, (int)strlen(stringOriginal));
    
    return 0;
}