#include <stdio.h>

int main() {

    int num, i;

    printf("Tabuada de 1 a 9\n\n");


    for(num = 1; num <= 9; num++) {

        printf("Tabuada do %d\n", num);


        for(i = 1; i <= 10; i++) {

            printf("%d x %d = %d\n", num, i, num * i);

        }

        printf("\n");

    }

    return 0;
}