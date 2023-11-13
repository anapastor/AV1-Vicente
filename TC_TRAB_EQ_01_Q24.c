#include <stdio.h>


int main() {

    int num1, num2, result;

    char operador;


    printf("Digite o primeiro valor: ");

    scanf("%d", &num1);


    printf("Digite o operador (+, -, *, /): ");

    scanf(" %c", &operador);


    printf("Digite o segundo valor: ");

    scanf("%d", &num2);


    switch(operador) {

        case '+':

            result = num1 + num2;

            break;

        case '-':

            result = num1 - num2;

            break;

        case '*':

            result = num1 * num2;

            break;

        case '/':

            if(num2 == 0) {

                printf("Erro: divisão por zero.\n");

                return 1;

            }

            result = num1 / num2;

            break;

        default:

            printf("Erro: operador inválido.\n");

            return 1;

    }


    printf("Resultado: %d\n", result);


    return 0;

}