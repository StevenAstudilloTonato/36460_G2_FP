#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Numero no valido");
    }
    else
    {
        factorial = 1;
        i = 1;

        while (i <= n)
        {
            factorial = factorial * i;
            i = i + 1;
        }

        printf("Factorial: %llu\n", factorial);
    }

    return 0;
}
