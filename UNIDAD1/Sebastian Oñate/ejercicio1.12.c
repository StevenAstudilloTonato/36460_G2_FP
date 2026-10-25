#include <stdio.h>

int main() {
    int num, suma, aux;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error\n");
    } else {
        suma = 0;
        while (num > 0) {
            aux = num % 10;
            suma = suma + aux;
            num = num / 10;
        }
        printf("La suma es: %d\n", suma);
    }

    return 0;
}
