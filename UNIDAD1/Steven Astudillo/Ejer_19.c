#include <stdio.h>

int main()
{
    int n, mayor, segundo, cantidad;

    mayor = 0;
    segundo = 0;
    cantidad = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    while (n != 0)
    {
        cantidad = cantidad + 1;

        if (n > mayor)
        {
            segundo = mayor;
            mayor = n;
        }
        else
        {
            if (n < mayor && n > segundo)
            {
                segundo = n;
            }
        }

        printf("Ingrese un numero: ");
        scanf("%d", &n);
    }

    if (cantidad < 2 || segundo == 0)
    {
        printf("No hay segundo mayor distinto");
    }
    else
    {
        printf("Mayor: %d\n", mayor);
        printf("Segundo mayor: %d\n", segundo);
    }

    return 0;
}
