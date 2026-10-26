#include <stdio.h>

int main()
{
    int n, suma, i;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);

    suma = 0;
    i = 1;

    while (i < n)
    {
        if (n % i == 0)
        {
            suma = suma + i;
        }

        i = i + 1;
    }

    if (suma == n && n > 0)
    {
        printf("El numero es perfecto");
    }
    else
    {
        printf("El numero no es perfecto");
    }

    return 0;
}
