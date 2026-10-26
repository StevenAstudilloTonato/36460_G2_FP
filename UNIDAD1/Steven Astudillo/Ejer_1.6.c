#include <stdio.h>

int main()
{
    float altura, suma = 0, maximo, minimo, media;
    int contador = 0;

    printf("Ingrese una altura: ");
    scanf("%f", &altura);

    while (altura >= 0)
    {
        if (contador == 0)
        {
            maximo = altura;
            minimo = altura;
        }
        else
        {
            if (altura > maximo)
            {
                maximo = altura;
            }

            if (altura < minimo)
            {
                minimo = altura;
            }
        }

        suma = suma + altura;
        contador = contador + 1;

        printf("Ingrese una altura: ");
        scanf("%f", &altura);
    }

    if (contador > 0)
    {
        media = suma / contador;

        printf("Media: %.2f\n", media);
        printf("Maximo: %.2f\n", maximo);
        printf("Minimo: %.2f\n", minimo);
    }
    else
    {
        printf("No se ingresaron alturas validas");
    }

    return 0;
}
