#include <stdio.h>

int main()
{
    int A, B, aux, n, i, primo;

    printf("Ingrese el primer numero: ");
    scanf("%d", &A);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &B);

    if (A > B)
    {
        aux = A;
        A = B;
        B = aux;
    }

    n = A;

    printf("Numeros primos:\n");

    while (n <= B)
    {
        if (n > 1)
        {
            primo = 1;
            i = 2;

            while (i < n && primo == 1)
            {
                if (n % i == 0)
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
                printf("%d\n", n);
            }
        }

        n = n + 1;
    }

    return 0;
}
