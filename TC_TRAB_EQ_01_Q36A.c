#include <stdio.h>

int main() {
    int matrizA[5][5], matrizB[5][5], matrizSoma[5][5], somaDiagonalA = 0, somaDiagonalB = 0;
    int matrizMultiplicacao[5][5];
    int i, j, k;
    
    // Preenchendo as matrizes A e B com valores informados pelo usuário
    printf("Preenchendo a matriz A:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor para a posição A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    printf("\nPreenchendo a matriz B:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor para a posição B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    // Calculando a soma das matrizes
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    
    // Calculando a soma das diagonais de cada matriz
    for (i = 0; i < 5; i++) {
        somaDiagonalA += matrizA[i][i];
        somaDiagonalB += matrizB[i][i];
    }
    
    // Calculando a multiplicação das matrizes
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matrizMultiplicacao[i][j] = 0;
            for (k = 0; k < 5; k++) {
                matrizMultiplicacao[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    
    printf("\nSoma das matrizes A e B:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSoma das diagonais da matriz A: %d\n", somaDiagonalA);
    printf("Soma das diagonais da matriz B: %d\n", somaDiagonalB);
    
    printf("\nMultiplicação das matrizes A e B:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrizMultiplicacao[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
