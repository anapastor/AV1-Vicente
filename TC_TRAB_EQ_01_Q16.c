#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double soma = 0.0;

    // Solicita o valor de n ao usuário
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula a soma da série
    for (int i = 1; i <= n; i++) {
        soma += exp(i) * sin(2 * i);
    }

    // Imprime o resultado
    printf("O resultado da expressão e^i * sin(2i) para i de 1 a %d é: %.4lf\n", n, soma);

    return 0;
}
