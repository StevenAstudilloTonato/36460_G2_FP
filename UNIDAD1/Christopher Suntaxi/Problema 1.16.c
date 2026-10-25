#include <stdio.h>

int main() {
    int n, d, suma = 0;

    scanf("%d", &n);

    for (d = 1; d <= n - 1; d++) {
        if (n % d == 0) {
            suma = suma + d;
        }
    }

    if (suma == n) {
        printf("Es perfecto\n");
    }
    else {
        printf("No es perfecto\n");
    }

    return 0;
}
