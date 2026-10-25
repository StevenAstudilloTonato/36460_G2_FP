#include <stdio.h>

int main() {
    int num1, num2, aux, i, j, cont, modulo;

    printf("Ingrese num1: ");
    scanf("%d", &num1);
    printf("Ingrese num2: ");
    scanf("%d", &num2);

    if (num1 < 1 || num2 < 1) {
        printf("Escoja numeros positivos\n");
    } else {
        if (num1 > num2) {
            aux = num1;
            num1 = num2;
            num2 = aux;
        }

        printf("Numeros primos en el rango:\n");
        i = num1;
        while (i <= num2) {
            if (i > 1) {
                j = 2;
                cont = 0;
                while (j < i) {
                    modulo = i % j;
                    if (modulo == 0) {
                        cont = cont + 1;
                    }
                    j = j + 1;
                }
                if (cont == 0) {
                    printf("%d\n", i);
                }
            }
            i = i + 1;
        }
    }

    return 0;
}
