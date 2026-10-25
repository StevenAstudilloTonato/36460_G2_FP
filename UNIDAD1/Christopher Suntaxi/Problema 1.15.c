#include <stdio.h>

int main() {
    int anio;

    scanf("%d", &anio);

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("anio bisiesto\n");
    }
    else {
        printf("anio no bisiesto\n");
    }

    return 0;
}
