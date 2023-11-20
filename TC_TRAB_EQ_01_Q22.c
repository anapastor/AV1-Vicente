#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;
    float media;

    printf("Digite uma sequência de números (digite 0 para terminar):\n");

   
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        
        if(numero != 0) {
            soma += numero;
            quantidade++;
        }
    } while(numero != 0);


    if(quantidade != 0) {
        media = (float)soma / quantidade;

        printf("A média dos números é: %.2f\n", media);

        
        printf("Soma de cada número com a média:\n");
        printf("(Número + Média) = Resultado\n");

        
        printf("(0 + %.2f) = %.2f\n", media, media);

        
        if(quantidade > 1) {
            int i = 1;
            while(i <= quantidade) {
                printf("(%d + %.2f) = %.2f\n", i, media, i + media);
                i++;
            }
        }
    } else {
        printf("Nenhum número foi inserido.\n");
    }

    return 0;
}
