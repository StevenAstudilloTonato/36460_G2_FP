#include <stdio.h>

int main() {
    float n1, vabs;

    printf("Ingrese un numero: ");
    scanf("%f", &n1);

    if (n1 < 0) {
        vabs = -1 * (n1 * n1 * n1);
    } else {
        vabs = (n1 * n1 * n1);
    }

    printf("El valor abs es: %.2f\n", vabs);

    return 0;
}
