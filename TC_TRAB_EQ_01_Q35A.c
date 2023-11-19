#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralhar(int vetor[], int tamanho) {
  int i, j, temp;
  
  // Preenche o vetor com valores de 0 a tamanho-1
  for (i = 0; i < tamanho; i++) {
    vetor[i] = i;
  }
  
  // Embaralha o vetor utilizando o algoritmo de Fisher-Yates
  for (i = tamanho - 1; i > 0; i--) {
    j = rand() % (i + 1);
    temp = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = temp;
  }
}

int main() {
  int vetor[52];
  int i;
  
  // Semente para gerar números aleatórios
  srand(time(NULL));
  
  // Chama a função de embaralhamento
  embaralhar(vetor, 52);
  
  // Imprime o vetor embaralhado
  for (i = 0; i < 52; i++) {
    printf("%d ", vetor[i]);
  }
  
  return 0;
}
