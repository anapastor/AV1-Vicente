#include <stdio.h>

int main() {
    int tamanho, i, num;

    printf("Digite o tamanho da sequencia de numeros: ");
    scanf("%d", &tamanho);

    int pares[tamanho], impares[tamanho];
    int indice_pares = 0, indice_impares = 0;

    printf("Digite os numeros inteiros e positivos, separados por espaços:\n");

    for (i = 0; i < tamanho; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares[indice_pares] = num;
            indice_pares++;
        } else {
            impares[indice_impares] = num;
            indice_impares++;
        }
    }

    printf("\nNumeros pares digitados: ");
    for (i = 0; i < indice_pares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNumeros impares digitados: ");
    for (i = 0; i < indice_impares; i++) {
        printf("%d ", impares[i]);
    }

    return 0;
}
