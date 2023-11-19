#include <stdio.h>

#define MAX_PROJETOS 10

typedef struct {
    int numeroProjeto;
    float saldo;
} Projeto;

int main() {
    Projeto projetos[MAX_PROJETOS];

    // Inicializando saldos dos projetos como zero
    for (int i = 0; i < MAX_PROJETOS; i++) {
        projetos[i].numeroProjeto = i;
        projetos[i].saldo = 0.0;
    }

    int numeroProjeto;
    float valor;
    char tipoDespesa;

    while (1) {
        printf("Digite o número do projeto (ou -1 para sair): ");
        scanf("%d", &numeroProjeto);

        if (numeroProjeto == -1) {
            break;
        }

        printf("Digite o valor: ");
        scanf("%f", &valor);

        printf("Digite o tipo de despesa (R - Receita, D - Despesa): ");
        scanf(" %c", &tipoDespesa);

        if (tipoDespesa == 'R') {
            projetos[numeroProjeto].saldo += valor;
        } else if (tipoDespesa == 'D') {
            projetos[numeroProjeto].saldo -= valor;
        } else {
            printf("Tipo de despesa inválido!\n");
        }
    }

    printf("Saldo final dos projetos:\n");
    for (int i = 0; i < MAX_PROJETOS; i++) {
        printf("Projeto %d: R$ %.2f\n", projetos[i].numeroProjeto, projetos[i].saldo);
    }

    return 0;
}
