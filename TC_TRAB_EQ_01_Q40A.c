#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaDiagonalSecundaria = 0;

    // Lendo os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo todos os elementos, exceto os da diagonal principal
    printf("Elementos da matriz, exceto diagonal principal:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    // Calculando a soma dos elementos da diagonal secundária
    for (i = 0; i < 3; i++) {
        somaDiagonalSecundaria += matriz[i][2 - i];
    }

    printf("Soma dos elementos da diagonal secundaria: %d\n", somaDiagonalSecundaria);

    return 0;
}
