#include <stdio.h>

int main() {
    float matriz[5][3];
    float matrizTransposta[3][5];
    float somaElementos = 0;
    float mediaElementos;
    
    printf("Digite os valores da matriz 5x3:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matriz[i][j]);
            somaElementos += matriz[i][j];
        }
    }
    

    mediaElementos = somaElementos / (5 * 3);
    

    printf("\nMatriz Original com a Média:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTransposta[j][i] = matriz[i][j];
            matriz[i][j] += mediaElementos;
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%.2f\t", matrizTransposta[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nSoma de Todos os Elementos: %.2f\n", somaElementos);
    
    return 0;
}
