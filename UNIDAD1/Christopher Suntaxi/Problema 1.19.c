#include <stdio.h>

int main() {
    int mayor = -1, segundo = -1, cantidad = 0, x;

    scanf("%d", &x);

    while (x != 0) {
        cantidad = cantidad + 1;

        if (x > mayor) {
            segundo = mayor;
            mayor = x;
        }
        else if (x < mayor && x > segundo) {
            segundo = x;
        }

        scanf("%d", &x);
    }

    if (cantidad < 2 || segundo == -1) {
        printf("No hay dos valores distintos\n");
    }
    else {
        printf("Mayor: %d\n", mayor);
        printf("Segundo mayor: %d\n", segundo);
    }

    return 0;
}
