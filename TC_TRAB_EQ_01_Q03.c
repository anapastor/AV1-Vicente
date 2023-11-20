#include <stdio.h>

int main() {
    int numero, soma = 0, quantidadeNumeros = 0;

    while (1) {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        soma += numero;
        quantidadeNumeros++;
    }

    printf("Soma dos números lidos: %d\n", soma);
    printf("Quantidade de números lidos: %d\n", quantidadeNumeros);

    return 0;
}