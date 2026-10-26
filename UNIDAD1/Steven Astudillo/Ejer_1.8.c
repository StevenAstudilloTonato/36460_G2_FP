#include <stdio.h>

int main()
{
    int N, i, primo;

    printf("Ingrese un numero mayor que 1: ");
    scanf("%d", &N);

    primo = 1;
    i = 2;

    if (N <= 1)
    {
        printf("El numero debe ser mayor que 1");
        return 0;
    }

    while (i < N && primo == 1)
    {
        if (N % i == 0)
        {
            primo = 0;
        }
        else
        {
            i = i + 1;
        }
    }

    if (primo == 1)
    {
        printf("Es primo");
    }
    else
    {
        printf("No es primo");
    }

    return 0;
}
