#include <stdio.h>

int main() {
    int num1, num2;
    float media;

    printf("Ingrese num1: ");
    scanf("%d", &num1);
    printf("Ingrese num2: ");
    scanf("%d", &num2);

    media = (float)(num1 + num2) / 2;
    printf("La media es: %.2f\n", media);

    return 0;
}
