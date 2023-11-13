#include <stdio.h>

int main() {
    int numero, maior = 0;

    do {
        // Solicita o número ao usuário
        printf("Digite um número inteiro (ou 0 para sair/onter resultado): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo
        if (numero == 0) {
            printf("Programa encerrado.\n");
        } else {
            // Verifica se o número atual é maior que o armazenado
            if (numero > maior) {
                maior = numero;
            }
        }

    } while (numero != 0);

    // Imprime o maior número
    printf("O maior número lido foi: %d\n", maior);

    return 0;
}
