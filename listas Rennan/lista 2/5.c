#include <stdio.h>

#define NUM_FILIAIS 4
#define DIAS_DA_SEMANA 7
#define NOME_DIAS 100

int main() {
    int treinos[NUM_FILIAIS][DIAS_DA_SEMANA];
    int totalPorFilial[NUM_FILIAIS] = {0};
    int totalPorDia[DIAS_DA_SEMANA] = {0};
    char nomesDias[NOME_DIAS] = {
        "Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};

    // Leitura dos dados
    for (int i = 0; i < NUM_FILIAIS; i++) {
        for (int j = 0; j < DIAS_DA_SEMANA; j++) {
            printf("Entre com treinos Filial %d, %s: ", i + 1, nomesDias[j]);
            scanf("%d", &treinos[i][j]);
            
            totalPorFilial[i] += treinos[i][j];
            totalPorDia[j] += treinos[i][j];
        }
    }

    // Lógica para filial mais ativa e dia mais movimentado
    int filialMaisAtiva = 0;
    for (int i = 1; i < NUM_FILIAIS; i++) {
        if (totalPorFilial[i] > totalPorFilial[filialMaisAtiva]) {
            filialMaisAtiva = i;
        }
    }

    int diaMaisMovimentado = 0;
    for (int j = 1; j < DIAS_DA_SEMANA; j++) {
        if (totalPorDia[j] > totalPorDia[diaMaisMovimentado]) {
            diaMaisMovimentado = j;
        }
    }

    // Exibição do Relatório
    printf("\n=== RELATORIO SEMANAL ===\n");
    for (int i = 0; i < NUM_FILIAIS; i++) {
        printf("Filial %d: Total = %d treinos\n", i + 1, totalPorFilial[i]);
    }

    printf("\n");
    for (int j = 0; j < DIAS_DA_SEMANA; j++) {
        printf("%s: %d treinos\n", nomesDias[j], totalPorDia[j]);
    }

    printf("\nFilial mais ativa: %d (%d treinos)\n", 
           filialMaisAtiva + 1, totalPorFilial[filialMaisAtiva]);
    printf("Dia mais movimentado: %s (%d treinos)\n", 
           nomesDias[diaMaisMovimentado], totalPorDia[diaMaisMovimentado]);

    return 0;
}