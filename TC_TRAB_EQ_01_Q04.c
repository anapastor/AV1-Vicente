#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0;  // Não é primo
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Não é primo
        }
    }
    return 1;  // É primo
}

int main() {
    int numero;
    int contPrimos = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (ehPrimo(numero)) {
            printf("%d eh primo.\n", numero);
            contPrimos++;
        } else {
            printf("%d nao eh primo.\n", numero);
        }

        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("Quantidade de numeros primos encontrados: %d\n", contPrimos);

    return 0;
}
