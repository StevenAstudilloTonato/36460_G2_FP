#include <stdio.h>

int main() {
    int n1, n2;

    printf("Ingrese num1: ");
    scanf("%d", &n1);
    printf("Ingrese num2: ");
    scanf("%d", &n2);

    if (n1 == 0) {
        printf("Error\n");
    } else {
        if (n2 % n1 == 0) {
            printf("Si es divisible\n");
        } else {
            printf("No es divisible\n");
        }
    }

    return 0;
}
