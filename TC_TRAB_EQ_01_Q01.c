#include <stdio.h>

int main() {
    int numero, quantidadeTotal = 0, maiorQue100 = 0, menorQue10 = 0, igualA20 = 0, igualA30 = 0, igualA40 = 0;

    while (1) {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        quantidadeTotal++;

        if (numero > 100) {
            maiorQue100++;
            printf("O número %d é maior do que 100.\n", numero);
        } else if (numero < 10) {
            menorQue10++;
            printf("O número %d é menor do que 10.\n", numero);
        } else if (numero == 20) {
            igualA20++;
            printf("O número é igual a 20.\n");
        } else if (numero == 30) {
            igualA30++;
            printf("O número é igual a 30.\n");
        } else if (numero == 40) {
            igualA40++;
            printf("O número é igual a 40.\n");
        } else {
            printf("O número %d não se encaixa em nenhuma categoria especificada.\n", numero);
        }
    }

    printf("Total de números lidos: %d\n", quantidadeTotal);
    printf("Quantidade de números maiores do que 100: %d\n", maiorQue100);
    printf("Quantidade de números menores do que 10: %d\n", menorQue10);
    printf("Quantidade de números iguais a 20: %d\n", igualA20);
    printf("Quantidade de números iguais a 30: %d\n", igualA30);
    printf("Quantidade de números iguais a 40: %d\n", igualA40);

    return 0;
}
