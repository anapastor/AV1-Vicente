#include <stdio.h>

#define ROWS 3
#define COLS 3
#define DEPTH 3

int main() {
    int matriz[ROWS][COLS][DEPTH];

    // Preencher a matriz tridimensional com valores fornecidos pelo usuário
    printf("Digite os elementos da matriz tridimensional:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                printf("Elemento [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }

    // Imprimir a diagonal principal da matriz
    printf("\nDiagonal Principal:\n");
    for (int i = 0; i < ROWS && i < COLS && i < DEPTH; i++) {
        printf("%d ", matriz[i][i][i]);
    }
    printf("\n");

    // Calcular e imprimir a soma dos elementos das arestas
    int soma = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                if (i == 0 || i == ROWS-1 || j == 0 || j == COLS-1 || k == 0 || k == DEPTH-1) {
                    soma += matriz[i][j][k];
                }
            }
        }
    }
    printf("Soma dos elementos das arestas: %d\n", soma);

    return 0;
}
