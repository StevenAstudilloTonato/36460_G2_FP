#include <stdio.h>

int main() {
    float n1;

    printf("Ingrese num1: ");
    scanf("%f", &n1);

    if (n1 > 0 && n1 < 10) {
        printf("Si pertenece al intervalo\n");
    } else {
        printf("No pertenece al intervalo\n");
    }

    return 0;
}
