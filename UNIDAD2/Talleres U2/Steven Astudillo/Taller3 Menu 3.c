#include <stdio.h>
#include <stdlib.h>

// Menu3
// Realizado por Steven Astudillo
// 18/11/2026

int main() {
    int opcion, anio, mes, dia, maxDias;
    char *meses[] = {"Enero", "Febrero", "Marzo", "Abril",
                     "Mayo", "Junio", "Julio", "Agosto",
                     "Septiembre", "Octubre", "Noviembre", "Diciembre"};
// Ingresamos las opciones que permiten la validacion de fecha y salida de programa
    do {
        system("cls");
        printf("MENU 3\n");
        printf("1. Validar fecha\n");
        printf("2. Borrar pantalla\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

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

            printf("\nFecha: %d de %s de %d\n", dia, meses[mes-1], anio);

            printf("\nPresione la tecla ENTER para volver al menu...");
            getchar();
            getchar();
        }
        else if (opcion == 2) {
            system("cls");
        }
        else if (opcion == 3) {
            printf("Saliendo del programa...\n");
        }
        else {
            printf("Opcion no valida\n");
            getchar();
            getchar();
        }

    } while (opcion != 3);

    return 0;
}
