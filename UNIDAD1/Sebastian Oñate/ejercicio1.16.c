#include <stdio.h>

int main() {
    int n1, div, sum;

    printf("Ingrese un num: ");
    scanf("%d", &n1);

    if (n1 > 0) {
        sum = 0;
        for (div = 1; div < n1; div++) {
            if (n1 % div == 0) {
                sum = sum + div;
            }
        }

        if (sum == n1) {
            printf("es perfecto\n");
        } else {
            printf("No es perfecto\n");
        }
    } else {
        printf("error num invalido\n");
    }

    return 0;
}
