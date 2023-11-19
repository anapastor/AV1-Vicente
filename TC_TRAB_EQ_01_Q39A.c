#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char letra;
    int quantidade = 0;

    printf("Digite uma frase (máximo 100 caracteres): ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    // Remover o caractere de nova linha (\n) do final da frase
    frase[strcspn(frase, "\n")] = '\0';

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            quantidade++;
        }
    }

    printf("A letra '%c' aparece %d vezes na frase.\n", letra, quantidade);

    return 0;
}
