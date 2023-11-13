#include <stdio.h>

int main() {
    int numero, somaPares = 0, produtoImpares = 1, somaTotal = 0;

    do {
        // Solicita o número ao usuário
        printf("Digite um número inteiro (ou 0 para sair/obter o resultado): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo
        if (numero == 0) {
            printf("Programa encerrado.\n");
        } else {
            // Soma total
            somaTotal += numero;

            // Verifica se o número é par ou ímpar
            if (numero % 2 == 0) {
                // Número par
                somaPares += numero;
            } else {
                // Número ímpar
                produtoImpares *= numero;
            }
        }

    } while (numero != 0);

    // Imprime os resultados
    printf("Soma dos números pares: %d\n", somaPares);
    printf("Produto dos números ímpares: %d\n", produtoImpares);
    printf("Soma de todos os números lidos: %d\n", somaTotal);

    return 0;
}
