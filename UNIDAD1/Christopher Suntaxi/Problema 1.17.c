#include <stdio.h>

int main() {
    int n, resto;
    long long binario = 0, peso = 1;

    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    }
    else {
        while (n > 0) {
            resto = n % 2;
            binario = binario + resto * peso;
            peso = peso * 10;
            n = n / 2;
        }

        printf("%lld\n", binario);
    }

    return 0;
}
