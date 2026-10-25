#include <stdio.h>

int main() {
    int c, dias, horas, min, seg;

    printf("Ingrese la cantidad de seg: ");
    scanf("%d", &c);

    if (c <= 0) {
        printf("Error no hay tiempo negativo\n");
    } else {
        dias = c / 86400;
        c = c % 86400;

        horas = c / 3600;
        c = c % 3600;

        min = c / 60;
        seg = c % 60;

        printf("Dias: %d, Horas: %d, Minutos: %d, Segundos: %d\n", dias, horas, min, seg);
    }

    return 0;
}
