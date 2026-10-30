#include <stdio.h>

int main() {
    int gem, sub, arm, med, com, Rgem;
    int salir = 1;

    printf("Bienvenido a la Tienda\n");
    printf("Listo, digite la cantidad de gemas de que dispone: ");
    scanf("%d", &gem);

    while (salir != 0) {
        printf("\nEscoja el tipo de suministros que desea comprar:\n");
        printf("1. Armas\n");
        printf("2. Medicamentos\n");
        printf("3. Comida\n");
        printf("Digite su opcion: ");
        scanf("%d", &sub);

        switch (sub) {
            case 1: {
                printf("\nSeleccione el arma que desea:\n");
                printf("1. Fusil - costo: 100 gemas\n");
                printf("2. Rifle - costo: 75 gemas\n");
                printf("3. Pistola - costo: 50 gemas\n");
                printf("4. Salir\n");
                scanf("%d", &arm);

                Rgem = 0;
                if (arm == 1) {
                    if (gem >= 100) {
                        printf("Obtuviste un fusil\n");
                        gem = gem - 100;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 100 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (arm == 2) {
                    if (gem >= 75) {
                        printf("Obtuviste un Rifle\n");
                        gem = gem - 75;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 75 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (arm == 3) {
                    if (gem >= 50) {
                        printf("Obtuviste una Pistola\n");
                        gem = gem - 50;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 50 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (arm == 4) {
                    printf("Saliendo\n");
                } else {
                    printf("Numero invalido\n");
                }
                break;
            }
            case 2: {
                printf("\nSeleccione el medicamento que desea:\n");
                printf("1. Alcohol - costo: 10 gemas\n");
                printf("2. Curitas - costo: 3 gemas\n");
                printf("3. Pastillas - costo: 5 gemas\n");
                printf("4. Salir\n");
                scanf("%d", &med);

                Rgem = 0;
                if (med == 1) {
                    if (gem >= 10) {
                        printf("Obtuviste un alcohol\n");
                        gem = gem - 10;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 10 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (med == 2) {
                    if (gem >= 3) {
                        printf("Obtuviste una curita\n");
                        gem = gem - 3;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 3 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (med == 3) {
                    if (gem >= 5) {
                        printf("Obtuviste pastillas\n");
                        gem = gem - 5;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 5 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (med == 4) {
                    printf("Saliendo...\n");
                } else {
                    printf("Numero invalido\n");
                }
                break;
            }
            case 3: {
                printf("\nSeleccione la comida que desea:\n");
                printf("1. Agua - costo: 50 gemas\n");
                printf("2. Carne - costo: 30 gemas\n");
                printf("3. Frutas - costo: 25 gemas\n");
                printf("4. Salir\n");
                scanf("%d", &com);

                Rgem = 0;
                if (com == 1) {
                    if (gem >= 50) {
                        printf("Obtuviste agua\n");
                        gem = gem - 50;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 50 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (com == 2) {
                    if (gem >= 30) {
                        printf("Obtuviste carne\n");
                        gem = gem - 30;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 30 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (com == 3) {
                    if (gem >= 25) {
                        printf("Obtuviste frutas\n");
                        gem = gem - 25;
                        printf("Gemas restantes: %d\n", gem);
                    } else {
                        Rgem = 25 - gem;
                        printf("Le faltan %d gemas\n", Rgem);
                    }
                } else if (com == 4) {
                    printf("Saliendo...\n");
                } else {
                    printf("Numero invalido\n");
                }
                break;
            }
            default:
                printf("Numero invalido\n");
                break;
        }

        printf("\nUsted tiene restantes: %d gemas.\n", gem);
        printf("Para salir digite 0, para seguir comprando digite 1: ");
        scanf("%d", &salir);
    }

    return 0;
}
