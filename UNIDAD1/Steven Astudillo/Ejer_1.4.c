#include <stdio.h>

int main()
{
    int x;

    printf("Ingrese un numero: ");
    scanf("%d", &x);

    if (x >= 0 && x <= 10)
    {
        printf("Pertenece al intervalo");
    }
    else
    {
        printf("No pertenece al intervalo");
    }

    return 0;
}
