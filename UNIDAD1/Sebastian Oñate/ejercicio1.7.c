#include <stdio.h>

int main() {
    int N, raiz1, i;

    printf("Introduzca el numero para sacar raiz: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Escoja un valor positivo\n");
    } else {
        i = 1;
        while (i * i <= N) {
            i = i + 1;
        }
        raiz1 = i - 1;
        printf("La raiz de %d es: %d\n", N, raiz1);
    }

    return 0;
}
