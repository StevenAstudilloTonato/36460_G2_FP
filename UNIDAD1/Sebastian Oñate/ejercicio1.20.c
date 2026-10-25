#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, intent, ints;

    srand(time(NULL));
    n = (rand() % 100) + 1;
    ints = 0;

    printf("Adivina un num entre 1 y 100\n");

    do {
        printf("Ingresa un num: ");
        scanf("%d", &intent);

        ints = ints + 1;

        if (intent < n) {
            printf("Es mas alto\n");
        } else {
            if (intent > n) {
                printf("mas bajo\n");
            } else {
                printf("Le atinaste\n");
            }
        }
    } while (intent != n);

    printf("Total intentos: %d\n", ints);

    return 0;
}
