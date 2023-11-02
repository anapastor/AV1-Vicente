#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double S;

    printf("n\t\tS\n");

    for (n = 10; n <= 100000; n += 10) {
        S = pow(1 + (1.0 / n), n);
        printf("%d\t\t%lf\n", n, S);
    }

    return 0;
}
