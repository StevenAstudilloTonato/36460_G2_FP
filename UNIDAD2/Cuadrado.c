#include <stdio.h>

void cuadrado(int filas) {
    int i, j;
    for (i = 1; i <= filas; i++) {
        for (j = 1; j <= filas; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int filas;

    printf("Ingrese las filas: ");
    scanf("%d", &filas);

    if (filas <= 0) {
        printf("Error: filas no validas\n");
    } else {
        cuadrado(filas);
    }

    return 0;
}
