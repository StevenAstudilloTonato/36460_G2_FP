#include <stdio.h>

int main()
{
    float x;

    printf("Ingrese un numero x: ");
    scanf("%f", &x);

    if (x < 0) {
        x = -x;
    }

    printf("El resultado es: %.2f\n", x * x * x);
    return 0;
}
