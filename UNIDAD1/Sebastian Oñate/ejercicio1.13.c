#include <stdio.h>

int main() {
    int num, inv, aux, rest;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        aux = num;
        inv = 0;

        while (aux > 0) {
            rest = aux % 10;
            inv = (inv * 10) + rest;
            aux = aux / 10;
        }

        if (num == inv) {
            printf("es capicua\n");
        } else {
            printf("No es capicua\n");
        }
    } else {
        printf("error\n");
    }

    return 0;
}
