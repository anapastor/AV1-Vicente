#include <stdio.h>
#include <limits.h>

int main() {
    int numero, menor = INT_MAX, soma = 0;

    do {
        // Solicita o número ao usuário
        printf("Digite um número inteiro (ou 0 para sair/obter resultado): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo
        if (numero == 0) {
            printf("Programa encerrado.\n");
        } else {
            // Verifica se o número atual é menor que o armazenado
            if (numero < menor) {
                menor = numero;
            }

            // Soma o número à variável soma
            soma += numero;
        }

    } while (numero != 0);

    // Imprime o menor número e a soma de todos os números
    printf("O menor número lido foi: %d\n", menor);
    printf("A soma de todos os números lidos foi: %d\n", soma);

    return 0;
}
