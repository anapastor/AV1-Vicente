#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    int raizes_complexas = 0;
    int raizes_reais = 0;

    while (1) {
        printf("Insira os coeficientes a, b e c (ou 0 0 0 para encerrar): ");
        scanf("%lf %lf %lf", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        double discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {
            double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("Duas raízes reais: %lf e %lf\n", raiz1, raiz2);

            if (raiz1 == raiz2) {
                printf("Soma das raízes: %lf\n", raiz1 + raiz2);
            }

            raizes_reais++;
        } else if (discriminante == 0) {
            double raiz = -b / (2 * a);
            printf("Uma raiz real: %lf\n", raiz);
            raizes_reais++;
        } else {
            raizes_complexas++;
            printf("Duas raízes complexas.\n");
        }
    }

    printf("Quantidade de raízes complexas encontradas: %d\n", raizes_complexas);

    return 0;
}
