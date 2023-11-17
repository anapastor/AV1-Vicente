#include <stdio.h>

// array: [2, 4, 35, 50, 23, 17, 9, 12, 27, 5, 14, 2, 3, 4, 1, 2, 5, 6, 8, 9]
// 1)maior valor
// 2)média
// 3)sub conjunto de valores primos dentro do array
// 4)média ponderada: peso = meu endereço(?)
// 5)normalização pelo maior número


int main()
{
    printf("Na sequência [2, 4, 35, 50, 23, 17, 9, 12, 27, 5, 14, 2, 3, 4, 1, 2, 5, 6, 8, 9]\n");
    int array[20] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5, 14, 2, 3, 4, 1, 2, 5, 6, 8, 9};
    int repeat = 1;
    int highest = 0;
    int size = 20;
    int i = 0;

    while(repeat){
        
        for(array[i] = highest; i < size; i++){
            
            if(i == 20){
            repeat = 0;
            }

            if(array[i] > highest){
            highest = array[i];
            repeat = 0;
            }
            
        }
        
            
        
        printf("Maior valor: %d\n", highest);
    }

    return 0;
}