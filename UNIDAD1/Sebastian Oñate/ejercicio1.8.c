#include <stdio.h>

int main() {
    int num, i, cont, modulo;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Escoja un valor correcto\n");
    } else {
        i = 2;
        cont = 0;
        while (i < num) {
            modulo = num % i;
            if (modulo == 0) {
                cont = cont + 1;
            }
            i = i + 1;
        }

        if (cont >= 1) {
            printf("No es primo\n");
        } else {
            printf("Es primo\n");
        }
    }

    return 0;
}
