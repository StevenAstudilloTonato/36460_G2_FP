#include <stdio.h>

int main()
{
    int n, original, invertido, digito;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);

    original = n;
    invertido = 0;

    while (n > 0)
    {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }

    if (original == invertido)
    {
        printf("Es capicua");
    }
    else
    {
        printf("No es capicua");
    }

    return 0;
}
