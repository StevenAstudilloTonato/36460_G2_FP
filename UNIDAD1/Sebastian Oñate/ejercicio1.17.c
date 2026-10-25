#include <stdio.h>

int main() {
    int n1, aux, bin, mul, res;

    printf("Ingrese un num en base 10 >= a 0: ");
    scanf("%d", &n1);

    if (n1 >= 0) {
        if (n1 == 0) {
            printf("El binario es 0\n");
        } else {
            aux = n1;
            bin = 0;
            mul = 1;

            while (aux > 0) {
                res = aux % 2;
                bin = bin + (res * mul);
                mul = mul * 10;
                aux = aux / 2;
            }

            printf("El binario es: %d\n", bin);
        }
    } else {
        printf("error\n");
    }

    return 0;
}
