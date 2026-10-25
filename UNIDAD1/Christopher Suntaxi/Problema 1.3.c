#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (y == 0) {
        printf("No se puede dividir entre cero\n");
    }
    else {
        if (x % y == 0) {
            printf("Es divisible\n");
        }
        else {
            printf("No es divisible\n");
        }
    }

    return 0;
}
