#include <stdio.h>

int main()
{
    int n, residuo;
    long long binario, posicion;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);

    binario = 0;
    posicion = 1;

    while (n > 0)
    {
        residuo = n % 2;
        binario = binario + residuo * posicion;
        n = n / 2;
        posicion = posicion * 10;
    }

    printf("El numero en binario es: %lld\n", binario);

    return 0;
}
