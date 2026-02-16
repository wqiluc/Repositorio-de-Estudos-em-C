/*
    FORMATAÇÕES EM C — EXEMPLO PRÁTICO
    Principais especificadores usados com printf()
    
    printf("%tipo_de_saida", valor_a_ser_impresso)
    printf("%tipo1, %tipo2", var1, var2)
*/

#include <stdio.h>
#include <.gitignore>

int main() {

    /* ================= INTEIROS ================= */

    int nome_do_parametro_int = 10;
    printf("%%d (int): %d\n", nome_do_parametro_int);      // decimal
    printf("%%i (int): %i\n", nome_do_parametro_int);      // decimal
    printf("%%o (octal): %o\n", nome_do_parametro_int);    // octal
    printf("%%x (hex min): %x\n", nome_do_parametro_int);  // hexadecimal minúsculo
    printf("%%X (hex mai): %X\n", nome_do_parametro_int);  // hexadecimal maiúsculo

    unsigned int nome_do_parametro_unsigned = 20; // unsigned = SOMENTE positivos
    printf("%%u (unsigned): %u\n", nome_do_parametro_unsigned);

    /* ================= DECIMAIS ================= */

    float nome_do_parametro_float = 3.14159f;
    double nome_do_parametro_double = 3.141592653589793;

    printf("%%f (float/double): %f\n", nome_do_parametro_float);
    printf("%%.2f (2 casas): %.2f\n", nome_do_parametro_float);
    printf("%%e (notação científica): %e\n", nome_do_parametro_double);
    printf("%%E (científica mai): %E\n", nome_do_parametro_double);
    printf("%%g (auto compacto): %g\n", nome_do_parametro_double);

    /* ================= CARACTERE ================= */

    char nome_do_parametro_char = 'A';
    printf("%%c (char): %c\n", nome_do_parametro_char);

    /* ================= STRING ================= */

    char nome_do_parametro_string[] = "Lucas";
    printf("%%s (string): %s\n", nome_do_parametro_string);

    /* ================= PONTEIRO ================= */

    int valor = 100;
    int *nome_do_parametro_ptr = &valor;
    printf("%%p (endereço): %p\n", nome_do_parametro_ptr);

    /* ================= TAMANHO E LARGURA ================= */

    int numero = 25;
    printf("%%5d (largura 5): %5d\n", numero);     // alinhado à direita
    printf("%%-5d (esquerda): %-5d\n", numero);    // alinhado à esquerda
    printf("%%05d (zeros): %05d\n", numero);       // completa com zeros

    /* ================= LONG E LONG LONG ================= */

    long nome_do_parametro_long = 100000L;
    long long nome_do_parametro_ll = 9000000000LL;

    printf("%%ld (long): %ld\n", nome_do_parametro_long);
    printf("%%lld (long long): %lld\n", nome_do_parametro_ll);

    /* ================= SIZE_T ================= */

    size_t nome_do_parametro_size = sizeof(int);
    printf("%%zu (size_t): %zu\n", nome_do_parametro_size);

    /* ================= IMPRIMIR %% ================= */

    printf("Para imprimir %% use %%%% \n");

    return 0;
}