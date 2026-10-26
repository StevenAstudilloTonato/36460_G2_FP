
#include <stdio.h>

int main() {
    int c;
    int dias, horas, minutos, segundos;
    int resto;

    // Inicio
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &c);

    // Calcular dias
    dias = c / 86400;
    resto = c % 86400;

    // Calcular horas
    horas = resto / 3600;
    resto = resto % 3600;

    // Calcular minutos
    minutos = resto / 60;

    // Calcular segundos restantes
    segundos = resto % 60;

    // Escribir resultados
    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}
