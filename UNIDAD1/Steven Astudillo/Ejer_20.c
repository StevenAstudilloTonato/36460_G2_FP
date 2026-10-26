#include <stdio.h>

int main()
{
    int secreto, contador, intento;

    secreto = 50;
    contador = 0;
    intento = 0;

    while (intento != secreto)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &intento);

        contador = contador + 1;

        if (intento < secreto)
        {
            printf("Mas alto\n");
        }
        else
        {
            if (intento > secreto)
            {
                printf("Mas bajo\n");
            }
            else
            {
                printf("Acertaste!\n");
            }
        }
    }

    printf("Intentos: %d\n", contador);

    return 0;
}
