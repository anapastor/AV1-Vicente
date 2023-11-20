#include <stdio.h>

int main() {
    int s = 0;

    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            for (int k = 3; k <= 100; k++) {
                int first_term = 2 * j * k;
                int second_term = i * j * k;
                int third_term = k * j * (i + j + k - 2);

                s += first_term + second_term + third_term;
            }
        }
    }

    printf("A soma de todos os termos é: %d\n", s);

    return 0;
}