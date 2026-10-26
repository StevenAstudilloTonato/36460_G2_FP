#include <stdio.h>

int main() {
    float N1, N2, Media;

    printf("Ingrese el primer numero: ");
    scanf("%f", &N1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &N2);

    Media = (N1 + N2) / 2;

    printf("La media es: %.2f\n", Media);

    return 0;
}
