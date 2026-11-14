#include<stdio.h>
// funciones que son llamadas por cada caso del switch
void cuadrado(int filas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < filas; j++) {
            if (i == 0 || i == filas - 1 || j == 0 || j == filas - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void serie_fibonacci(int n){
    int a = 0, b = 1, c;
    if (n <= 0) {
    printf("Por favor, ingrese un numero mayor a 0\n");
    } else {
        for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    }
}
int main(){
    //declaracion de variables
    int opcion,salida,filas,n;
    printf("BIENVENIDO A LA SECION DE MENU\n");
    //hacemos que almenos una vez se ejecute las opciones
    do{
    printf("Digite el numero al cual quiera ingresar\n");
    printf("1.cuadrado\n");
    printf("2.serie de fibonacci\n");
    printf("3.salida\n");
    scanf("%d",&opcion);
            switch (opcion){
                //mandamos cada caso a las funciones para tener un codigo limpio
                case 1:
                     printf("Digite el numero de filas que desea tener el cuadrado\n");
                     scanf("%d",&filas);
                     cuadrado(filas);
                break;
                case 2:
                    printf("Digite el numero de terminos  que desee\n");
                     scanf("%d",&n);
                     serie_fibonacci(n);
                     printf("\n");
                break;
                case 3:
                    printf("Gracias por su visita \n");
                    return 0;
                default:
                    printf("Ingrese solo numeros del 1 al 3\n");
                break;
            }
    printf("digite  4 para escoger otra opcion\n");
    scanf("%d",&salida);
     printf("------------------------------------\n\n");
    }while(salida!=3);
  return 0;
 }

