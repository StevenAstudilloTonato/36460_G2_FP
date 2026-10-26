#include <stdio.h>
#include <math.h>

int main() {
    float x, R;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    R = pow(fabs(x), 3);

    printf("El resultado es: %.2f\n", R);

    return 0;
}
