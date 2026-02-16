/*
    TIPOS DE VARIÁVEIS EM C — EXEMPLO PRÁTICO
    Tudo demonstrado dentro de um int main() {} */

#include <stdio.h>
#include <stdbool.h>
#include <.gitignore>

int main() {

    /* ================= INTEIROS1️⃣2️⃣3️⃣ ================= */

    int nome_do_parametro = 10;                 // inteiro padrão (±)
    short int nome_do_parametro_short = 5;      // inteiro menor
    long int nome_do_parametro_long = 100000L;  // inteiro maior
    long long int nome_do_parametro_ll = 9000000000LL; // inteiro muito grande

    unsigned int nome_do_parametro_unsigned = 20; // somente positivos

    /* ================= DECIMAIS (.,) ================= */

    float nome_do_parametro_float = 1.75f;          // decimal simples
    double nome_do_parametro_double = 3.14159;      // maior precisão
    long double nome_do_parametro_ld = 3.141592653589793L; // altíssima precisão

    /* ================= CARACTERE🖼️ ================= */

    char nome_do_parametro_char = 'A';          // 1 caractere
    unsigned char nome_do_parametro_uchar = 255; // apenas positivo (0–255)

    /* ================= STRING 💬 ================= */

    char nome_do_parametro_string[20] = "Lucas"; 
    // array de char terminado com '\0'

    /* ================= BOOLEANO✅❌ ================= */

    bool nome_do_parametro_bool = true; 
    // true (1) ou false (0)

    /* ================= ARRAY⭕️ ================= */

    int nome_do_parametro_array[5] = {1, 2, 3, 4, 5};
    // conjunto de valores do mesmo tipo

    /* ================= PONTEIRO🧭 ================= */

    int valor = 100;
    int *nome_do_parametro_ptr = &valor;
    // guarda endereço de memória
    // *nome_do_parametro_ptr acessa o valor

    /* ================= STRUCT🏛️ ================= */

    struct Exemplo {
        int nome_do_parametro_struct;
        float outro_parametro;
    };

    struct Exemplo variavel_struct;
    variavel_struct.nome_do_parametro_struct = 10;
    variavel_struct.outro_parametro = 5.5f;

    /* ================= ENUM ================= */

    enum Nivel {BAIXO, MEDIO, ALTO};

    enum Nivel nome_do_parametro_enum = MEDIO;
    // BAIXO = 0, MEDIO = 1, ALTO = 2

    /* ================= TYPEDEF ================= */

    typedef int inteiro;

    inteiro nome_do_parametro_typedef = 50;
    // "inteiro" agora é apelido para int

    /* ================= MODIFICADORES ================= */

    const int nome_do_parametro_const = 30; // const = constante
    // não pode ser alterado

    static int nome_do_parametro_static = 0; // mantém o valor
    // mantém valor entre execuções da função

    volatile int nome_do_parametro_volatile; // int alterável
    // pode ser alterado externamente (hardware, sistema)

    return 0;
}