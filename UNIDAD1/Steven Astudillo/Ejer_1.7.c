#include <stdio.h>

int main()
{
    int N, i, R;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &N);

    i = 1;

    while (i * i <= N)
    {
        i = i + 1;
    }

    R = i - 1;

    printf("La raiz cuadrada entera es: %d\n", R);

    return 0;
}
