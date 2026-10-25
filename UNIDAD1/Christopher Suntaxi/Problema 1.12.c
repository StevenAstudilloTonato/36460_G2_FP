#include <stdio.h>

int main() {
    int n, suma, digito;

    scanf("%d", &n);

    suma = 0;

    while (n > 0) {
        digito = n % 10;
        suma = suma + digito;
        n = n / 10;
    }

    printf("%d\n", suma);

    return 0;
}
