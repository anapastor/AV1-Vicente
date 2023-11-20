#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    int raizes_complexas = 0;
    int raizes_intervalo = 0;
    int raizes_produto = 0;

    while (1) {
        printf("Digite os coeficientes a, b e c (ou 0 0 0 para encerrar): ");
        scanf("%lf %lf %lf", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        double discriminante = b * b - 4 * a * c;

        if ((a >= 5 && a <= 10) && (b >= 5 && b <= 10) && (c >= 5 && c <= 10)) {
            printf("Coeficientes no intervalo (5, 10).\n");
            raizes_intervalo++;
        }

        if ((a * b * c) < 2) {
            printf("Produto das raízes menor que 2.\n");
            raizes_produto++;
        }

        if (discriminante < 0) {
            printf("Raízes complexas encontradas.\n");
            raizes_complexas++;
        }
    }

    printf("Quantidade de raízes no intervalo (5, 10): %d\n", raizes_intervalo);
    printf("Quantidade de raízes com produto menor que 2: %d\n", raizes_produto);
    printf("Quantidade de raízes complexas: %d\n", raizes_complexas);

    return 0;
}
