#include <stdio.h>

int main() {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    float mediaAluno, mediaTurma = 0, mediaGlobal = 0;
    int numAlunos = 0;

    while (1) {
        // Leitura dos dados do aluno
        printf("Digite o nome do aluno (ou 'nulo' para encerrar): ");
        scanf("%s", nome);

        // Verifica se deve encerrar a leitura
        if (nome[0] == 'n' && nome[1] == 'u' && nome[2] == 'l' && nome[3] == 'o')
            break;

        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite as três notas do aluno (separadas por espaços): ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        // Calcula a média do aluno
        mediaAluno = (nota1 + nota2 + nota3) / 3;

        // Imprime os dados do aluno e sua situação
        printf("\nNome: %s\nMatrícula: %d\nNotas: %.2f, %.2f, %.2f\nMédia: %.2f\n", nome, matricula, nota1, nota2, nota3, mediaAluno);
        if (mediaAluno >= 7.0) {
            printf("Situação: Aprovado\n\n");
        } else {
            printf("Situação: Reprovado\n\n");
        }

        // Atualiza as médias da turma
        mediaTurma += mediaAluno;
        mediaGlobal += mediaAluno;
        numAlunos++;
    }

    // Verifica se há alunos antes de calcular médias
    if (numAlunos > 0) {
        // Calcula e imprime a média da turma
        mediaTurma /= numAlunos;
        printf("Média da turma: %.2f\n", mediaTurma);

        // Calcula e imprime a média global
        mediaGlobal /= numAlunos;
        printf("Média global: %.2f\n", mediaGlobal);
    } else {
        printf("Nenhum aluno inserido.\n");
    }

    return 0;
}
