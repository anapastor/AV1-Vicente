#include <stdio.h>

#define MAX_DATAS 64

struct Data {
    int dia;
    int mes;
    int ano;
};

void ordenarDatas(struct Data datas[], int quantidade) {
    int i, j;
    struct Data temp;
    
    for (i = 0; i < quantidade - 1; i++) {
        for (j = 0; j < quantidade - 1 - i; j++) {
            if (datas[j].ano > datas[j + 1].ano) {
                temp = datas[j];
                datas[j] = datas[j + 1];
                datas[j + 1] = temp;
            } else if (datas[j].ano == datas[j + 1].ano && datas[j].mes > datas[j + 1].mes) {
                temp = datas[j];
                datas[j] = datas[j + 1];
                datas[j + 1] = temp;
            } else if (datas[j].ano == datas[j + 1].ano && datas[j].mes == datas[j + 1].mes 
                       && datas[j].dia > datas[j + 1].dia) {
                temp = datas[j];
                datas[j] = datas[j + 1];
                datas[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Data datas[MAX_DATAS];
    int quantidade = 0;
    
    printf("Entre com as datas (formato dd/mm/aaaa):\n");

    while (quantidade < MAX_DATAS) {
        int dia, mes, ano;
        
        printf("Digite a data (0/0/0 para sair): ");
        scanf("%d/%d/%d", &dia, &mes, &ano);
        
        if (dia == 0 && mes == 0 && ano == 0) {
            break;
        }
        
        datas[quantidade].dia = dia;
        datas[quantidade].mes = mes;
        datas[quantidade].ano = ano;
        
        quantidade++;
    }
    
    ordenarDatas(datas, quantidade);
    
    printf("\nDatas em ordem cronológica:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%02d/%02d/%04d\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }
    
    return 0;
}
