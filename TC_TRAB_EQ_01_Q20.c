#include <stdio.h>
#include <stdlib.h>

void push(int* stack, int* top, int value) {
    *top = *top + 1;
    stack[*top] = value;
}

int pop(int* stack, int* top) {
    if (*top == -1) {
        printf("Stack underflow\n");
        exit(0);
    }
    int popped = stack[*top];
    *top = *top - 1;
    return popped;
}

int main() {
    int stack[100], top = -1, value;

    printf("Digite a sequência de números, separados por espaços (finalize com 0):\n");
    while (1) {
        scanf("%d", &value);
        if (value == 0) break;
        push(stack, &top, value);
    }

    printf("Sequência na ordem inversa:\n");
    while (top != -1) {
        printf("%d ", pop(stack, &top));
    }
    printf("\n");

    return 0;
}