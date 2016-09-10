#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int menu(int a,int b){
int opcion,flag =0;

        printf("Bienvinido a la Calculadora \n, Seleccione una opcion \n");
        printf("1- Ingresar 1er operando (A=%d)\n", a);
        printf("2- Ingresar 2do operando (B=%d)\n", b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        fflush(stdin);
        scanf("%d",&opcion);
        do{
        if(opcion<1 || opcion>9){
        printf("Seleccione una opcion entre 1 y 9\n");
        fflush(stdin);
        scanf("%d",&opcion);
        }else{
            flag = 1;
        }

        }while(flag==0);
return opcion;
}

void suma(int x,int y){
int suma = 0;

suma = x+y;
printf("La suma de A+B es: %d \n", suma);
getch();

}

void resta(int p,int q){
int resta;

resta = p-q;
printf("La resta de A-B es: %d \n", resta);
getch();
}

void dividir(int r,int s){
float divi,aux1,aux2;

if(s==0){
    printf("el valor de B no puede ser cero para realizar la division, reingresar valor en B");
    getch();
}
else{
    aux1 = r;
    aux2 = s;
    divi= aux1/aux2;
    printf("La division de A/B es: %.2f \n",divi);
    getch();
}

}


void multiplicar(int c,int d){

int multi;
multi = c*d;
printf("La multiplicación de A*B es: %d \n",multi);
getch();
}

void factorial(int o){
unsigned long long  calculo = 1;
int i;

if(o<0){
    printf("Error no existen numero factorial para numeros negativos, reingresar valor en A\n");
    getch();
}else{

for(i=1;i<=o;i++){
    calculo = calculo*i;
}

printf("El factorial de A es: %llu \n",calculo);
getch();
}
}
