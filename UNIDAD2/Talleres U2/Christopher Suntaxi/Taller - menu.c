// Taller - Menu
// Estudiante: Christopher Suntaxi
// Fecha: 12/11/2026
#include <stdio.h>
int main()
{
    // Declaracion de variables
    int N = 0;
    int n = 0;
    int fil = 0;
    int i = 0;
    int j = 0;

    // Mostrar el menu hasta seleccionar la opcion de salir
    do
    {
        printf("\n========== TALLER - MENU ==========\n");
        printf("1. Figura (Marco)\n");
        printf("2. Serie de Fibonacci\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &N);

        // Evaluar la opcion seleccionada
        switch (N)
        {
            case 1:
            {
                // Solicitar un numero de filas valido
                do
                {
                    printf("Ingrese numero de filas (> 0): ");
                    scanf("%d", &fil);

                    if (fil <= 0)
                    {
                        printf("Error: Ingrese un numero mayor a cero.\n");
                    }

                } while (fil <= 0);

                // Dibujar el marco utilizando dos ciclos for
                for (i = 0; i < fil; i++)
                {
                    for (j = 0; j < fil; j++)
                    {
                        // Identificar los bordes de la figura
                        if (i == 0 || i == fil - 1 ||
                            j == 0 || j == fil - 1)
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
                // Solicitar una cantidad valida de terminos
                do
                {
                    printf("Ingrese numero de terminos (> 0): ");
                    scanf("%d", &n);

                    if (n <= 0)
                    {
                        printf("Error: Ingrese un numero positivo.\n");
                    }

                } while (n <= 0);

                // Declarar las variables de Fibonacci
                int a = 0;
                int b = 1;
                int c = 0;

                printf("Serie: ");

                // Generar los terminos de Fibonacci
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

                    // Mostrar los terminos separados por comas
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
                printf("Gracias por utilizar el programa. Hasta luego.\n");
                break;
            }

            default:
            {
                printf("Opcion incorrecta. Intente nuevamente.\n");
                break;
            }
        }

    } while (N != 3);

    return 0;
}
