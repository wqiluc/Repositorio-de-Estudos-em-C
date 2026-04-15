#include <stdio.h>

#define QTD_DESENVOLVEDORES 5
#define QTD_MESES 3
#define VALOR_POR_BUG 50.0

int main() {
    int bugsMensais[QTD_DESENVOLVEDORES][QTD_MESES];
    int totalBugs[QTD_DESENVOLVEDORES] = {0};
    float bonusTrimestral[QTD_DESENVOLVEDORES];

    // Entrada de dados
    for (int i = 0; i < QTD_DESENVOLVEDORES; i++) {
        for (int j = 0; j < QTD_MESES; j++) {
            printf("Entre com os bugs do mes %d do desenvolvedor %d: ", j + 1, i + 1);
            scanf("%d", &bugsMensais[i][j]);
            totalBugs[i] += bugsMensais[i][j];
        }
        bonusTrimestral[i] = totalBugs[i] * VALOR_POR_BUG;
    }

    // Saída de dados
    printf("\n--- RESULTADOS ---\n");
    for (int i = 0; i < QTD_DESENVOLVEDORES; i++) {
        printf("Desenvolvedor %d: total de bugs %d, bonus=R$%.2f\n", 
               i + 1, totalBugs[i], bonusTrimestral[i]);
    }

    return 0;
}