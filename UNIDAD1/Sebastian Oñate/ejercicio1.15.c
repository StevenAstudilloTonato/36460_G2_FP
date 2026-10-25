#include <stdio.h>

int main() {
    int n1;

    printf("Ingrese un anio: ");
    scanf("%d", &n1);

    if ((n1 % 4 == 0) && (n1 % 100 != 0 || n1 % 400 == 0)) {
        printf("si es bisiesto\n");
    } else {
        printf("No es bisiesto\n");
    }

    return 0;
}
