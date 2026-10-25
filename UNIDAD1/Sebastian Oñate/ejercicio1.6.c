#include <stdio.h>

int main() {
    float alt, media, max, min, suma = 0;
    int cont = 0;

    do {
        printf("Ingrese la altura (<= 0 para terminar): ");
        scanf("%f", &alt);

        if (alt > 0) {
            if (cont == 0) {
                max = alt;
                min = alt;
            } else {
                if (alt > max) {
                    max = alt;
                }
                if (alt < min) {
                    min = alt;
                }
            }
            suma = suma + alt;
            cont = cont + 1;
        }
    } while (alt > 0);

    if (cont > 0) {
        media = suma / cont;
        printf("La media es: %.2f, El max es: %.2f, El min es: %.2f\n", media, max, min);
    } else {
        printf("No hay alturas\n");
    }

    return 0;
}
