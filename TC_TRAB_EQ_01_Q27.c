#include <stdio.h>
#include <math.h>

int main() {
    float total;
    char op;
 
    printf("Total: R$");
    scanf("%f", &total);
    printf("\nOpções de Pagamento:\n\nA)A vista com 10%% de desconto.\nB)Em duas vezes (preço de etiqueta).\nC)De 3 até 10 vezes com 3%% de juros ao mês(somente para compras acima de R$100,00).\n\nOpção: ");
    scanf("%s", &op);
   
    switch (tolower(op)) {

        case 'a': 
            total = total - (0.1 * total);
        break;

        case 'b':
            total = total / 2;
        break;

        case 'c':
            if (total >= 100){
                total = total + (total * 0.03);
            }else{
                printf("Valor menor do que R$100");
                return 0;
            }
        break;
    
        default:
            printf("Inválido");
            break;
    }
    
        printf("Valor do Pagamento: R$%.2f", total);
}
