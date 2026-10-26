//Ejercicio 7
//Christopher Suntaxi 
//26-10-2026
#include <stdio.h>

int main() {
    int N, i, R;
    printf("Ingrese un numero para dividir: ");
    scanf("%d", &N);

    i = 1;

    while (i * i <= N) {
        i = i + 1;
    }

    R = i - 1;

    printf("%d\n", R);

    return 0;
}
