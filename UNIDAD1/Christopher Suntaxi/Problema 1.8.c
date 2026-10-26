//Ejercicio 8
//Christopher Suntaxi 
//26-10-2026
#include <stdio.h>

int main() {
    int n, i = 2, primo;

    scanf("%d", &n);

    if (n <= 1) {
        printf("Ingrese un numero mayor que 1\n");
    }
    else {
        primo = 1;

        while (i < n && primo == 1) {
            if (n % i == 0) {
                primo = 0;
            }
            else {
                i = i + 1;
            }
        }

        if (primo == 1) {
            printf("Es primo\n");
        }
        else {
            printf("No es primo\n");
        }
    }

    return 0;
}
