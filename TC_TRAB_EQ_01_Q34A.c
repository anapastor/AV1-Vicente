#include<stdio.h>

int main() {
    float velocidades[60]; // vetor para armazenar as velocidades
    int i;
    
    // preenchendo o vetor com as velocidades
    for(i = 0; i < 60; i++) {
        printf("Informe a velocidade em m/s no instante de tempo %d: ", i+1);
        scanf("%f", &velocidades[i]);
    }
    
    // a) maior periodo de tempo em que o veiculo se deslocou sem diminuir a velocidade
    int maiorPeriodoSemDiminuir = 0;
    int periodoAtual = 0;
    for(i = 0; i < 59; i++) {
        if(velocidades[i] <= velocidades[i+1]) {
            periodoAtual++;
        } else {
            if(periodoAtual > maiorPeriodoSemDiminuir) {
                maiorPeriodoSemDiminuir = periodoAtual;
            }
            periodoAtual = 0;
        }
    }
    if(periodoAtual > maiorPeriodoSemDiminuir) {
        maiorPeriodoSemDiminuir = periodoAtual;
    }
    printf("a) O maior periodo de tempo em que o veiculo se deslocou sem diminuir a velocidade foi de %d segundos.\n", maiorPeriodoSemDiminuir+1);
    
    // b) instante de tempo em que o veiculo iniciou a frenagem mais abrupta
    float difMax = velocidades[0] - velocidades[1];
    int instanteFrenagem = 1;
    for(i = 2; i < 60; i++) {
        float dif = velocidades[i-1] - velocidades[i];
        if(dif > difMax) {
            difMax = dif;
            instanteFrenagem = i;
        }
    }
    printf("b) O veiculo iniciou a frenagem mais abrupta no instante de tempo %d.\n", instanteFrenagem+1);
    
    // c) maior aceleração (positiva) e seu instante de tempo inicial
    float aceleracaoMax = velocidades[1] - velocidades[0];
    int instanteAceleracao = 0;
    for(i = 2; i < 60; i++) {
        float dif = velocidades[i] - velocidades[i-1];
        if(dif > aceleracaoMax) {
            aceleracaoMax = dif;
            instanteAceleracao = i;
        }
    }
    printf("c) A maior aceleracao positiva foi de %.2f m/s^2 e ocorreu no instante de tempo %d.\n", aceleracaoMax, instanteAceleracao+1);
    
    // d) maior periodo de tempo em que o veiculo se deslocou com velocidade constante
    int maiorPeriodoVelocidadeConstante = 0;
    int periodoAtualConstante = 0;
    for(i = 0; i < 59; i++) {
        if(velocidades[i] == velocidades[i+1]) {
            periodoAtualConstante++;
        } else {
            if(periodoAtualConstante > maiorPeriodoVelocidadeConstante) {
                maiorPeriodoVelocidadeConstante = periodoAtualConstante;
            }
            periodoAtualConstante = 0;
        }
    }
    if(periodoAtualConstante > maiorPeriodoVelocidadeConstante) {
        maiorPeriodoVelocidadeConstante = periodoAtualConstante;
    }
    printf("d) O maior periodo de tempo em que o veiculo se deslocou com velocidade constante foi de %d segundos.\n", maiorPeriodoVelocidadeConstante+1);
    
    return 0;
}
