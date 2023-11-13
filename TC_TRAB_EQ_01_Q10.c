#include <stdio.h>

#define VALOR_HORA 35.0
#define INSS_PERCENTUAL 8.5
#define SINDICAL_PERCENTUAL 1.02
#define PLANO_SAUDE_PERCENTUAL 6.0

int main() {
    int matricula;
    char nome[100];
    float horasTrabalhadas, salarioBruto, salarioLiquido;
    float contribuicaoINSS, contribuicaoSindical, contribuicaoPlanoSaude;
    float totalFolhaPagamento = 0, totalContribuicaoINSS = 0, totalContribuicaoSindical = 0, totalContribuicaoPlanoSaude = 0;

    while (1) {
        // Lê a matrícula do funcionário
        printf("Digite a matrícula do funcionário (ou '0' para encerrar): ");
        scanf("%d", &matricula);

        if (matricula == 0) {
            break; // Se a matrícula for '0', encerra o loop
        }

        // Lê o nome e as horas trabalhadas do funcionário
        printf("Digite o nome do funcionário: ");
        scanf("%s", nome);

        printf("Digite o total de horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        // Calcula o salário bruto
        salarioBruto = horasTrabalhadas * VALOR_HORA;

        // Calcula as contribuições
        contribuicaoINSS = salarioBruto * (INSS_PERCENTUAL / 100.0);
        contribuicaoSindical = salarioBruto * (SINDICAL_PERCENTUAL / 100.0);
        contribuicaoPlanoSaude = salarioBruto * (PLANO_SAUDE_PERCENTUAL / 100.0);

        // Calcula o salário líquido
        salarioLiquido = salarioBruto - contribuicaoINSS - contribuicaoSindical - contribuicaoPlanoSaude;

        // Atualiza os totais
        totalFolhaPagamento += salarioBruto;
        totalContribuicaoINSS += contribuicaoINSS;
        totalContribuicaoSindical += contribuicaoSindical;
        totalContribuicaoPlanoSaude += contribuicaoPlanoSaude;

        // Imprime os resultados para o funcionário atual
        printf("\nNome: %s\nMatrícula: %d\nSalário Bruto: R$ %.2f\nSalário Líquido: R$ %.2f\n\n", nome, matricula, salarioBruto, salarioLiquido);
    }

    // Imprime os totais
    printf("\nTotal da folha de pagamento: R$ %.2f\n", totalFolhaPagamento);
    printf("Total de contribuição para o INSS: R$ %.2f\n", totalContribuicaoINSS);
    printf("Total de contribuição sindical: R$ %.2f\n", totalContribuicaoSindical);
    printf("Total de contribuição para o plano de saúde: R$ %.2f\n", totalContribuicaoPlanoSaude);

    return 0;
}
