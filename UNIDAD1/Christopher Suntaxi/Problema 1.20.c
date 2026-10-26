//Ejercicio 20
//Christopher Suntaxi 
//26-10-2026
#include <stdio.h>

int main() {
    int secreto = 37;
    int intentos = 0;
    int intento;

    scanf("%d", &intento);

    while (intento != secreto) {
        intentos = intentos + 1;

        if (intento < secreto) {
            printf("Mas alto\n");
        }
        else {
            printf("Mas bajo\n");
        }

        scanf("%d", &intento);
    }

    intentos = intentos + 1;
    printf("Numero de intentos : %d\n", intentos);

    return 0;
}
