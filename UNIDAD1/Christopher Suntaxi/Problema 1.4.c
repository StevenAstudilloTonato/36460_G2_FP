#include <stdio.h>

int main() {
    float x;

    scanf("%f", &x);

    if (x >= 0 && x <= 10) {
        printf("Pertenece al intervalo\n");
    }
    else {
        printf("No pertenece al intervalo\n");
    }

    return 0;
}
