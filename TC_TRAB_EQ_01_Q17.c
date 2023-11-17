#include <stdio.h>

int main() {
    int n = 2231;
    double S2 = 0;
    int k = 1;

    for(int i = 1; i <= n; i++) {
        S2 += 2 ^ 3 * i + k / i + 1;
    }

    printf("S2 = %.0f\n", S2);
    return 0;
}