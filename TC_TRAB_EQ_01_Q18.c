#include <stdio.h>

int main() {
    int s, k;

    for(k = 3; k <= 18; k++) {
        s = 0;

        for(int i = 1; i <= k; i++) {
            int p = pow(10, i-1) * 231;
            int m = pow(10, i-1);

            s += (p + m + p - m) / pow(10, i);

        
        }

        printf("S = %d\n", s);
    }

    return 0;
}