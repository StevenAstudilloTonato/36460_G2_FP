#include <stdio.h>

int main()
{
    int x, y, residuo;

    printf("Ingrese el primer numero: ");
    scanf("%d", &x);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &y);

    if (y == 0)
    {
        printf("No se puede dividir entre 0");
    }
    else
    {
        residuo = x % y;

        if (residuo == 0)
        {
            printf("Es divisible");
        }
        else
        {
            printf("No es divisible");
        }
    }

    return 0;
}
