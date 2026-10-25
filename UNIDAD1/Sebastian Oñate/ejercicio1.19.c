#include <stdio.h>

int main() {
    int n, may, seg, cont;

    may = 0;
    seg = 0;
    cont = 0;

    printf("Ingrese num: ");
    scanf("%d", &n);

    while (n != 0) {
        cont = cont + 1;

        if (n > may) {
            seg = may;
            may = n;
        } else {
            if (n > seg && n < may) {
                seg = n;
            }
        }

        printf("Ingrese num: ");
        scanf("%d", &n);
    }

    if (cont >= 2) {
        printf("El mayor es: %d\n", may);
        printf("El segundo mayor es: %d\n", seg);
    } else {
        printf("Escriba al menos 2 num\n");
    }

    return 0;
}
