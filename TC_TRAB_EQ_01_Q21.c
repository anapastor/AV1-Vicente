#include <stdio.h>


int main() {

    int arr[100];

    int num, i = 0;


    // Solicita ao usuário inserir números

    printf("Digite os numeros (0 para parar): ");


    // Lê os números digitados pelo usuário até 0 ser inserido

    do {

        scanf("%d", &num);

        if (num != 0) {

            arr[i] = num; // Armazena os números em um array

            i++;

        }

    } while (num != 0);


    // Ordenação dos números em ordem crescente (usando algoritmo de seleção)

    int j, temp;

    for (int k = 0; k < i - 1; k++) {

        for (j = k + 1; j < i; j++) {

            if (arr[k] > arr[j]) {

                temp = arr[k];

                arr[k] = arr[j];

                arr[j] = temp;

            }

        }

    }


    // Exibe os números em ordem crescente

    printf("Ordem crescente: ");

    for (int k = 0; k < i; k++) {

        printf("%d ", arr[k]);

    }

    printf("\n");


    // Exibe os números em ordem decrescente

    printf("Ordem decrescente: ");

    for (int k = i - 1; k >= 0; k--) {

        printf("%d ", arr[k]);

    }

    printf("\n");


    return 0;

}