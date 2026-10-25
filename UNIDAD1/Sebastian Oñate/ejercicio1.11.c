#include <stdio.h>

int main() {
    int n, a, b, c, i;

    printf("Digite el valor de terminos que desea: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Escoja valores mayores a 0\n");
    } else {
        a = 0;
        b = 1;

        if (n >= 1) {
            printf("%d ", a);
        }

        if (n >= 2) {
            printf("%d ", b);
        }

        for (i = 3; i <= n; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}
