#include <stdio.h>

int main() {
    int num, i;
    long long fact;

    printf("Ingrese num: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Escoja numeros positivos\n");
    } else {
        i = 1;
        fact = 1;
        while (i <= num) {
            fact = fact * i;
            i = i + 1;
        }
        printf("El factorial de %d es: %lld\n", num, fact);
    }

    return 0;
}
