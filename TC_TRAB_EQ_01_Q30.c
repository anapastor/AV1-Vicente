#include <stdio.h>

//Elabore um programa em C que interprete uma linguagem com apenas quatro comandos: Soma, Subtração, Produto, e Divisão e
//Leia as instruções com esses comandos e execute-as.


int main()
{
    while (1){
    double result;
    char operation;
    double n;
    printf("Escolha uma operação, digite:\n '1' para soma, '2' para subtração, '3' para multiplicação ou ou '4' divisão. Digite 'q' para sair: ");
    scanf("%s", &operation);
    
   
    if (operation == 'q'){
        break;
    }

    printf("Digite um inicial: ");
    scanf("%lf", &result);

    printf("Digite um valor: ");
    scanf("%lf", &n);
    
   
    switch(operation) {
       
        case '1':
            printf("\nOperação: Soma");
            result += n;
            break;
       
        case '2':
            printf("\nOperação: Subtração");
            result -= n;
            break;
       
        case '3':
            printf("\nOperação: Produto");
            result *= n;
            break;
       
        case '4':
            printf("\nOperação: Divisão");
            if (n != 0){
                result /= n;
            }
            else {
                printf("Erro: divisão por zero.");
            }
            break;
        default:
            printf("Operação inválida.");
       
    }
   
    printf("\nResultado atual: %2.lf\n", result);
    }
   
    return 0;
}