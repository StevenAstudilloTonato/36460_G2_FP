
#include <stdio.h>
#include <math.h>

// Taller - Menu
// Christopher Suntaxi
// 12/11/2026

int main()
{
    int op = 0;
    int n = 0;
    int fil = 0;
    int i = 0;
    int j = 0;

    do
    {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie de Fibonacci\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
            {
                do
                {
                    printf("Ingrese numero de filas (> 0): ");
                    scanf("%d", &fil);

                    if (fil <= 0)
                    {
                        printf("Error: El numero de filas debe ser mayor a cero.\n");
                    }

                } while (fil <= 0);

                for (i = 0; i < fil; i++)
                {
                    for (j = 0; j < fil; j++)
                    {
                        if ((i == 0) || (i == fil - 1) ||
                            (j == 0) || (j == fil - 1))
                        {
                            printf("* ");
                        }
                        else
                        {
                            printf("  ");
                        }
                    }

                    printf("\n");
                }

                break;
            }

            case 2:
            {
                do
                {
                    printf("Ingrese numero de terminos (> 0): ");
                    scanf("%d", &n);

                    if (n <= 0)
                    {
                        printf("Error: Ingrese un numero positivo de terminos.\n");
                    }

                } while (n <= 0);

                int a = 0;
                int b = 1;
                int c = 0;

                printf("Serie: ");

                for (i = 1; i <= n; i++)
                {
                    if (i == 1)
                    {
                        c = 0;
                    }
                    else if (i == 2)
                    {
                        c = 1;
                    }
                    else
                    {
                        c = a + b;
                        a = b;
                        b = c;
                    }

                    if (i == n)
                    {
                        printf("%d", c);
                    }
                    else
                    {
                        printf("%d, ", c);
                    }
                }

                printf("\n");
                break;
            }

            case 3:
            {
                printf("Gracias por entrar. Hasta luego!\n");
                break;
            }

            default:
            {
                printf("No hay una opcion con ese numero. Intente de nuevo.\n");
                break;
            }
        }

    } while (op != 3);

    return 0;
}
