//Ejercicio 11
//Christopher Suntaxi 
//26-10-2026
#include <stdio.h>

int main() {
    int n, i, anterior, actual, siguiente;

    scanf("%d", &n);

    if (n < 1) {
        printf("n debe ser mayor o igual que 1\n");
    }
    else {
        anterior = 0;
        actual = 1;

        for (i = 1; i <= n; i++) {
            printf("%d\n", anterior);
            siguiente = anterior + actual;
            anterior = actual;
            actual = siguiente;
        }
    }

    return 0;
}
