#include <stdio.h>

int main() {
    int numero, ordem = 1;
    long long produto_ordem = 1;
    long long soma_quadrados = 0;

    while (1) {
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        produto_ordem *= (numero == ordem) ? numero : 1;
        soma_quadrados += numero * numero;

        ordem++;
    }

    printf("Produto dos números cujo valor é igual à sua ordem: %lld\n", produto_ordem);
    printf("Soma dos quadrados de todos os números lidos: %lld\n", soma_quadrados);

    return 0;
}

