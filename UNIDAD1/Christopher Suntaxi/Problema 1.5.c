#include <stdio.h>

int main() {
    int c, dias, horas, minutos, segundos;

    scanf("%d", &c);

    dias = c / 86400;
    horas = (c % 86400) / 3600;
    minutos = (c % 3600) / 60;
    segundos = c % 60;

    printf("%d %d %d %d\n", dias, horas, minutos, segundos);

    return 0;
}
