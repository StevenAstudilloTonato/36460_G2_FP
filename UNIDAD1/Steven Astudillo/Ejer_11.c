#include <stdio.h>

int main()
{
    int n, anterior, actual, siguiente, i;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    anterior = 0;
    actual = 1;
    i = 1;

    while (i <= n)
    {
        if (i == 1)
        {
            printf("%d ", anterior);
        }
        else
        {
            if (i == 2)
            {
                printf("%d ", actual);
            }
            else
            {
                siguiente = anterior + actual;
                actual = siguiente;
                printf("%d ", siguiente);
            }
        }

        i = i + 1;
    }

    return 0;
}
