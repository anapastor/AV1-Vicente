#include <stdio.h>

int main() {
    int numero, soma = 0, produto = 1;

    while (1) {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 2 && numero < 100 && numero != 10 && numero != 20 && numero != 32) {
            soma += numero;
            produto *= numero;
        }
    }

    printf("Soma dos números válidos: %d\n", soma);
    printf("Produto dos números válidos: %d\n", produto);

    return 0;
}
