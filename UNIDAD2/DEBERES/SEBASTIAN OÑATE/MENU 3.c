#include<stdio.h>
#include<stdlib.h>
void validar_fecha(){
    int anio, mes, dia;
    //ingreso del año hasta que este dentro del rango
    do {
        printf("ingrese el anio:\n");
        scanf("%d", &anio);
    } while(anio < 1900 || anio > 2015);

   //ingreso del mes hasta que este entre 1 a 12
    do {
        printf("ingrese el mes (1-12):\n ");
        scanf("%d", &mes);
    } while(mes < 1 || mes > 12);
    //verificamos que los meses que tienen 31 dias esten dentro del rango de 1 a 31
      if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
        do {
                printf("ingrese el dia (1-31):\n ");
                scanf("%d", &dia);
            } while(dia < 1 || dia > 31);
    }
    //lo mismo para los meses que tienen solo 30 dias
     if(mes==4||mes==6||mes==9||mes==11){
        do {
                printf("ingrese el dia (1-30):\n ");
                scanf("%d", &dia);
            } while(dia < 1 || dia > 30);

    }
     //solo para el mes de febrero solo 29 dias
     if(mes==2){
        do {
                printf("ingrese el dia (1-30):\n ");
                scanf("%d", &dia);
            } while(dia < 1 || dia > 29);

    }
//imprimos la fecha acorde al mes que eligio
    switch (mes){
        case 1:
             printf("dia: %d mes: enero anio: %d\n", dia, anio);
             break;
        case 2:
             printf("dia: %d mes: febrero anio: %d\n", dia, anio);
             break;
        case 3:
             printf("dia: %d mes: marzo anio: %d\n", dia, anio);
             break;
        case 4:
             printf("dia: %d mes: abril anio: %d\n", dia, anio);
             break;
        case 5:
             printf("dia: %d mes: mayo anio: %d\n", dia, anio);
             break;
        case 6:
             printf("dia: %d mes: junio anio: %d\n", dia, anio);
             break;
        case 7:
             printf("dia: %d mes: julio anio: %d\n", dia, anio);
             break;
        case 8:
             printf("dia: %d mes: agosto anio: %d\n", dia, anio);
             break;
        case 9:
             printf("dia: %d mes: septiembre anio: %d\n", dia, anio);
             break;
        case 10:
             printf("dia: %d mes: octubre anio: %d\n", dia, anio);
             break;
        case 11:
             printf("dia: %d mes: noviembre anio: %d\n", dia, anio);
             break;
        case 12:
             printf("dia: %d mes: diciembre anio: %d\n", dia, anio);
             break;
    }
}

void serie_alfabetica(){

    int terminos;
    char letra1='a',letra2='b';
    //validacion de terminos positivos
    do{
        printf("\ningrese el numero de terminos de la serie(solo positivos): ");
        scanf("%d",&terminos);
        if(terminos<=0){
            printf("porfavor solo enteros :C no sea burro\n");
        }
    }while(terminos<=0);
    // imprimimos las letras impares
    printf("SERIE ALFABETICA:\n");
    printf("----------------\n");
     printf("Maximo de terminos 24\n");
    for(int i=1;i<=terminos;i++){
        printf("%c ",letra1);
        letra1+=2;
    }
    printf("\n");
    //imprimos las lineas
     for(int i=1;i<=terminos;i++){
        printf("- ");
    }
    printf("\n");
    // imprimos la fila 3
    for(int i=1;i<=terminos;i++){
        printf("%c ",letra2);
        letra2+=2;
    }
    printf("\n");
}

 void serie_numerica(){
     int terminos,a=1,b=5;

     //validacion de terminos postivos
      do{
        printf("\ningrese el numero de terminos de la serie(solo positivos): ");
        scanf("%d",&terminos);
        if(terminos<0){
            printf("porfavor solo enteros :C no sea burro\n");
        }
    }while(terminos<0);
    if (terminos==0){
    }
    // para los casos base de terminos 1 y 2
    if (terminos==1){
        printf("%d",a);
    }
        if (terminos==2){
        printf("%d",b);
    }
    // para los casos de terminos mayores a 3
   for(int i=1;i<=terminos;i++){
       if (i%2!=0){
           printf("%d ",a);
           a+=2;
       }
       else{
           printf("%d  ",b);
           b+=2;
       }
    }
    printf("\n");


 }


int main(){
    int opcion;
printf("----BIENVENIDO---\n");
do{
printf("escoga una opcion(solo numeros)\n");
printf("1.validar fecha\n");
printf("2.desplegar serie letras\n");
printf("3.desplegar serie numero\n");
printf("4.salida\n");
printf("ingrese opcion: ");
scanf("%d",&opcion);
if (opcion>=1 && opcion<=4 ){
        switch(opcion){
        case 1:
            validar_fecha();
            printf("\n\n");
            system("pause");
            system("cls");
            break;
        case 2:
            serie_alfabetica();
             printf("\n\n");
            system("pause");
            system("cls");
             break;
        case 3:
            serie_numerica();
             printf("\n\n");
            system("pause");
            system("cls");
             break;
        case 4:
            break;
            }
}
else {
        printf("\nerror numero invalido\n");
        printf("-------------------------\n");
}

}while(opcion!=4);
printf("saliendo :D\n");
printf("gracias por su visita \n");
return 0;
}
