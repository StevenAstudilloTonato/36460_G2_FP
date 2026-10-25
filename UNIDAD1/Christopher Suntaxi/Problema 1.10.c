#include <stdio.h>

int main() {
    int n, i;
    long long factorial;

    scanf("%d", &n);

    if (n < 0) {
        printf("Numero no valido\n");
    }
    else {
        factorial = 1;

        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("%lld\n", factorial);
    }

    return 0;
}
