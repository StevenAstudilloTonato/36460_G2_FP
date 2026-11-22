#include <stdio.h>
#include <stdlib.h>

void validarFecha() {
    int d, m, a, limite;

    printf("\nVALIDAR FECHA\n");

    printf("Ingrese el anio: ");
    scanf("%d", &a);

    while(a < 1900 || a > 2015) {
        printf("Anio incorrecto. Ingrese otra vez: ");
        scanf("%d", &a);
    }

    printf("Ingrese el mes: ");
    scanf("%d", &m);

    while(m < 1 || m > 12) {
        printf("Mes incorrecto. Ingrese otra vez: ");
        scanf("%d", &m);
    }

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        limite = 31;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        limite = 30;
    }
    else {
        limite = 29;
    }

    printf("Ingrese el dia: ");
    scanf("%d", &d);

    while(d < 1 || d > limite) {
        printf("Dia incorrecto. Ingrese otra vez: ");
        scanf("%d", &d);
    }

    printf("\nFecha ingresada: %d de ", d);

    switch(m) {
        case 1: printf("Enero"); break;
        case 2: printf("Febrero"); break;
        case 3: printf("Marzo"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Mayo"); break;
        case 6: printf("Junio"); break;
        case 7: printf("Julio"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Septiembre"); break;
        case 10: printf("Octubre"); break;
        case 11: printf("Noviembre"); break;
        case 12: printf("Diciembre"); break;
    }

    printf(" de %d\n", a);
}

void serieLetras() {
    int n, i;
    char l1 = 'a';
    char l2 = 'b';

    printf("\nSERIE DE LETRAS\n");
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);

    while(n <= 0) {
        printf("Ingrese un numero mayor que cero: ");
        scanf("%d", &n);
    }

    for(i = 1; i <= n; i++) {
        printf("%c ", l1);
        l1 = l1 + 2;
    }

    printf("\n");

    for(i = 1; i <= n; i++) {
        printf("- ");
    }

    printf("\n");

    for(i = 1; i <= n; i++) {
        printf("%c ", l2);
        l2 = l2 + 2;
    }

    printf("\n");
}

void serieNumeros() {
    int n, i;
    int num1 = 1;
    int num2 = 5;

    printf("\nSERIE DE NUMEROS\n");
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);

    while(n < 0) {
        printf("Ingrese un numero positivo: ");
        scanf("%d", &n);
    }

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
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

int main() {
    int opcion = 0;

    do {
        printf("\n--- MENU 3 ---\n");
        printf("1. Validar Fecha\n");
        printf("2. Desplegar serie de letras\n");
        printf("3. Desplegar serie de numeros\n");
        printf("4. Salir\n");
        printf("5. Limpiar pantalla\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                validarFecha();
                break;

            case 2:
                serieLetras();
                break;

            case 3:
                serieNumeros();
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            case 5:
                system("cls");
                break;

            default:
                printf("Opcion incorrecta\n");
        }

    } while(opcion != 4);

    return 0;
}
