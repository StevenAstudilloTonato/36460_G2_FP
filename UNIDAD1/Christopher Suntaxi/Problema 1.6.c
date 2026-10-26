//Ejercicio 6
//Christopher Suntaxi 
//26-10-2026
#include <stdio.h>

int main() {
    float suma = 0, altura, max, min, media;
    int cantidad = 0;

    scanf("%f", &altura);

    while (altura > 0) {
        if (cantidad == 0) {
            max = altura;
            min = altura;
        } else {
            if (altura > max) {
                max = altura;
            }
            if (altura < min) {
                min = altura;
            }
        }

        suma = suma + altura;
        cantidad = cantidad + 1;

        scanf("%f", &altura);
    }

    if (cantidad > 0) {
        media = suma / cantidad;
        printf("%.2f %.2f %.2f\n", media, max, min);
    }

    return 0;
}
