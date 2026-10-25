#include <stdio.h>

int main() {
    int n1, n2, aux, a, b;

    printf("Ingrese num1: ");
    scanf("%d", &n1);

    printf("Ingrese num2: ");
    scanf("%d", &n2);

    a = n1;
    b = n2;

    if (a > 0 && b > 0) {
        while (b != 0) {
            aux = b;
            b = a % b;
            a = aux;
        }
        printf("El MCD es: %d\n", a);
    } else {
        printf("error ingrese num valido\n");
    }

    return 0;
}
