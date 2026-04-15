#include <stdio.h>

typedef struct {
    int anoFabricacao;
    float pesoVeiculo;
}VEICULO;

int main(void) {
    VEICULO veiculo1, veiculo2;

    veiculo1.anoFabricacao = 2020;
    veiculo1.pesoVeiculo = 1500.5;

    // Cópia por valor: veiculo2 recebe uma cópia independente de veiculo1
    veiculo2 = veiculo1;
    veiculo2.anoFabricacao = 2024;

    // Saída: 2020 - 1500.5 (A alteração em veiculo2 não afeta veiculo1)
    printf("%d - %.1f\n", veiculo1.anoFabricacao, veiculo2.pesoVeiculo);

    return 0;
}