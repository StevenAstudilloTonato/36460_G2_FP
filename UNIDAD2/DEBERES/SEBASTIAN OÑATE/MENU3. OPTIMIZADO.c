#include <stdio.h>
#include <stdlib.h>

void validar_fecha() {
    int anio, mes, dia;
    const char *nombres_mes[] = {
        "", "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
    };

    do {
        printf("ingrese el anio (1900-2015):\n");
        scanf("%d", &anio);
    } while (anio < 1900 || anio > 2015);

    do {
        printf("ingrese el mes (1-12):\n");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    int max_dias = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        max_dias = 30;
    } else if (mes == 2) {
        max_dias = 29;
    }

    do {
        printf("ingrese el dia (1-%d):\n", max_dias);
        scanf("%d", &dia);
    } while (dia < 1 || dia > max_dias);

    printf("dia: %d mes: %s anio: %d\n", dia, nombres_mes[mes], anio);
}

void serie_alfabetica() {
    int terminos;
    char letra1 = 'a', letra2 = 'b';

    do {
        printf("\ningrese el numero de terminos de la serie (solo positivos): ");
        scanf("%d", &terminos);
        if (terminos <= 0) {
            printf("por favor solo enteros positivos\n");
        }
    } while (terminos <= 0);

    printf("SERIE ALFABETICA:\n");
    printf("----------------\n");
    printf("Maximo de terminos 24\n");

    for (int i = 1; i <= terminos; i++) {
        printf("%c ", letra1);
        letra1 += 2;
    }
    printf("\n");

    for (int i = 1; i <= terminos; i++) {
        printf("- ");
    }
    printf("\n");

    for (int i = 1; i <= terminos; i++) {
        printf("%c ", letra2);
        letra2 += 2;
    }
    printf("\n");
}

void serie_numerica() {
    int terminos, a = 1, b = 5;

    do {
        printf("\ningrese el numero de terminos de la serie (>= 0): ");
        scanf("%d", &terminos);
        if (terminos < 0) {
            printf("por favor no ingrese numeros negativos\n");
        }
    } while (terminos < 0);

    for (int i = 1; i <= terminos; i++) {
        if (i % 2 != 0) {
            printf("%d ", a);
            a += 2;
        } else {
            printf("%d  ", b);
            b += 2;
        }
    }
    printf("\n");
}

int main() {
    int opcion;
    printf("----BIENVENIDO---\n");

    do {
        printf("escoga una opcion (solo numeros)\n");
        printf("1. validar fecha\n");
        printf("2. desplegar serie letras\n");
        printf("3. desplegar serie numero\n");
        printf("4. salida\n");
        printf("ingrese opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                validar_fecha();
                break;
            case 2:
                serie_alfabetica();
                break;
            case 3:
                serie_numerica();
                break;
            case 4:
                break;
            default:
                printf("\nerror numero invalido\n");
                printf("-------------------------\n");
                break;
        }

        if (opcion >= 1 && opcion <= 3) {
            printf("\n\n");
            system("pause");
            system("cls");
        }
    } while (opcion != 4);

    printf("saliendo :D\n");
    printf("gracias por su visita \n");
    return 0;
}
