//Ejercicio 18
//Christopher Suntaxi 
//26-10-2026
#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
