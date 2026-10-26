#include <stdio.h>

int main()
{
    int n, suma, digito;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);

    suma = 0;

    while (n > 0)
    {
        digito = n % 10;
        suma = suma + digito;
        n = n / 10;
    }

    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}
