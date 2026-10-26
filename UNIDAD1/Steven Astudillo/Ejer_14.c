#include <stdio.h>

int main()
{
    int a, b, residuo;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    while (b != 0)
    {
        residuo = a % b;
        a = b;
        b = residuo;
    }

    printf("El MCD es: %d\n", a);

    return 0;
}
