#include <stdio.h>

int main() {
    int numero;

    do {
        // Solicita o número ao usuário
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo
        if (numero == 0) {
            printf("Programa encerrado.\n");
        } else {
            // Verifica se o número é par ou ímpar sem usar o operador de resto
            if ((numero / 2) * 2 == numero) {
                printf("%d é um número PAR.\n", numero);
            } else {
                printf("%d é um número ÍMPAR.\n", numero);
            }
        }

    } while (numero != 0);

    return 0;
}
