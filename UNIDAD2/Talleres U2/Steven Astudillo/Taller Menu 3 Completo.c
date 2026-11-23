
#include <stdio.h>
#include <stdlib.h>

// Menu principal
// Realizado por Steven Astudillo
// 18/11/2026

int main() {
    int opcion, anio, mes, dia, maxDias;
    int cantidad, i, num1, num2;
    char letra1, letra2;

    char *meses[] = {"Enero", "Febrero", "Marzo", "Abril",
                     "Mayo", "Junio", "Julio", "Agosto",
                     "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    // Requisito1: Menu principal
    do {
        system("cls");

        printf("MENU 3\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        // Requisito2: Validar fecha
        if (opcion == 1) {

            do {
                printf("Ingrese anio (1900-2015): ");
                scanf("%d", &anio);
            } while (anio < 1900 || anio > 2015);

            do {
                printf("Ingrese mes (1-12): ");
                scanf("%d", &mes);
            } while (mes < 1 || mes > 12);

            if (mes == 2) {
                if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
                    maxDias = 29;
                else
                    maxDias = 28;
            }
            else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
                maxDias = 30;
            else
                maxDias = 31;

            do {
                printf("Ingrese dia (1-%d): ", maxDias);
                scanf("%d", &dia);
            } while (dia < 1 || dia > maxDias);

            printf("\nFecha: %d de %s de %d\n",
                   dia, meses[mes-1], anio);
        }

        // Requisito: Desplegar serie de letras
        else if (opcion == 2) {

            do {
                printf("Ingrese cantidad de terminos: ");
                scanf("%d", &cantidad);
            } while (cantidad <= 0);

            letra1 = 'a';
            letra2 = 'b';

            // Primera fila de letras
            for (i = 0; i < cantidad; i++) {
                printf("%c ", letra1);
                letra1 = letra1 + 2;
            }

            printf("\n");

            // Segunda fila de guiones
            for (i = 0; i < cantidad; i++) {
                printf("- ");
            }

            printf("\n");

            // Tercera fila de letras
            for (i = 0; i < cantidad; i++) {
                printf("%c ", letra2);
                letra2 = letra2 + 2;
            }

            printf("\n");
        }

        // Requisito4: Desplegar serie de numeros
        else if (opcion == 3) {

            do {
                printf("Ingrese cantidad de terminos: ");
                scanf("%d", &cantidad);
            } while (cantidad < 0);

            num1 = 1;
            num2 = 5;

            for (i = 0; i < cantidad; i++) {

                if (i % 2 == 0) {
                    printf("%d ", num1);
                    num1 = num1 + 2;
                }
                else {
                    printf("%d ", num2);
                    num2 = num2 + 2;
                }
            }

            printf("\n");
        }

        // Requisito5: Salir
        else if (opcion == 4) {
            printf("Salir...\n");
        }

        else {
            printf("Opcion no valida\n");
        }

        // Regresar al menu
        if (opcion != 4) {
            printf("\nPresione ENTER para volver al menu...");
            getchar();
            getchar();
        }

    } while (opcion != 4);

    return 0;
}
