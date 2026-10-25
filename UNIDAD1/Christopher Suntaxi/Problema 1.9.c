#include <stdio.h>

int main() {
    int a, b, n, d, primo, hayPrimos = 0;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a < 2) {
        a = 2;
    }

    for (n = a; n <= b; n++) {
        primo = 1;
        d = 2;

        while (d < n && primo == 1) {
            if (n % d == 0) {
                primo = 0;
            } else {
                d = d + 1;
            }
        }

        if (primo == 1) {
            printf("%d\n", n);
            hayPrimos = 1;
        }
    }

    if (hayPrimos == 0) {
        printf("No hay numeros Primos\n");
    }

    return 0;
}
