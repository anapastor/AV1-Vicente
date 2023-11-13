#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
    int numero, contagem = 0, soma = 0, somaQuadrados = 0, produtoCubos = 1;
    int numerosMaioresQue200[100];  // Assumindo um máximo de 100 números maiores que 200
    int indiceMaioresQue200 = 0;

    do {
        // Solicita o número ao usuário
        printf("Digite um número inteiro (ou 0 para sair/obter resultado): ");
        scanf("%d", &numero);

        // Verifica se o número é nulo
        if (numero == 0) {
            printf("\nPrograma encerrado.\n");
        } else {
            // Atualiza as variáveis para cálculos
            contagem++;
            soma += numero;
            somaQuadrados += pow(numero, 2);
            produtoCubos *= pow(numero, 3);

            // Armazena números maiores que 200
            if (numero > 200) {
                numerosMaioresQue200[indiceMaioresQue200] = numero;
                indiceMaioresQue200++;
            }
        }

    } while (numero != 0);

    // Calcula a média
    double media = (double)soma / contagem;

    // Imprime os resultados
    printf("Média: %.2lf\n", media);
    printf("Soma dos quadrados: %d\n", somaQuadrados);
    printf("Produto dos cubos: %d\n", produtoCubos);

    // Imprime os números maiores que 200
    printf("Números maiores que 200: ");
    for (int i = 0; i < indiceMaioresQue200; i++) {
        printf("%d ", numerosMaioresQue200[i]);
    }
    printf("\n");

    return 0;
}
