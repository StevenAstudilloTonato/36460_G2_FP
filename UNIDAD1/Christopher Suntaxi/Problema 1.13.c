//Ejercicio 13
//Christopher Suntaxi 
//26-10-2026
#include <stdio.h>

int main() {
    int n, original, temporal, invertido, digito;

    scanf("%d", &n);

    original = n;
    temporal = n;
    invertido = 0;

    while (temporal > 0) {
        digito = temporal % 10;
        invertido = invertido * 10 + digito;
        temporal = temporal / 10;
    }

    if (original == invertido) {
        printf("Es capicua\n");
    }
    else {
        printf("No es capicua\n");
    }

    return 0;
}
