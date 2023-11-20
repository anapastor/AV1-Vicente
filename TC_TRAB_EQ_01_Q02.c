#include <stdio.h>

int main() {
    int numero;
    int somaMenor150Maior50 = 0;
    int produtoDiferenteDe10Maior5Menor70 = 1;
    int somaTotal = 0;
    int quantidadeNumeros = 0;
    int produtoMaior20Menor30 = 1;
    int somaQuadradosMaior16 = 0;

    while (1) {
        printf("Digite um número (ou 99, 0, ou 14 para sair): ");
        scanf("%d", &numero);

        if (numero == 99 || numero == 0 || numero == 14) {
            break;
        }
        if (numero > 50 && numero < 150) {
            somaMenor150Maior50 += numero;
        }
        if (numero != 10 && numero > 5 && numero < 70) {
            produtoDiferenteDe10Maior5Menor70 *= numero;
        }
        somaTotal += numero;
        quantidadeNumeros++;
        if (numero > 20 && numero < 30) {
            produtoMaior20Menor30 *= numero;
        }

        if (numero > 16) {
            somaQuadradosMaior16 += numero * numero;
        }
    }

    float media = (float)somaTotal / quantidadeNumeros;

    printf("a) Soma dos números lidos menores do que 150 e maiores do que 50: %d\n", somaMenor150Maior50);
    printf("b) Produto de números lidos diferentes de 10, maiores do que 5 e menores do que 70: %d\n", produtoDiferenteDe10Maior5Menor70);
    printf("c) Média dos números lidos: %.2f\n", media);
    printf("d) Produto dos números lidos maiores do que 20 e menores do que 30: %d\n", produtoMaior20Menor30);
    printf("e) Soma dos quadrados dos números lidos maiores do que 16: %d\n", somaQuadradosMaior16);

    return 0;
}
