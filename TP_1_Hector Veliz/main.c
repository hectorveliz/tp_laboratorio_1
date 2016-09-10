#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define PF printf
#define SC scanf

int main()
{
int op=0,flag =0;
int valora = 0, valorb = 0;
while(flag==0){
system("cls");
op = menu(valora,valorb);
system("cls");
        switch(op){
            case 1:
                    PF("Ingrese el valor de A:\n");
                    fflush(stdin);
                    SC("%d",&valora);
                break;
            case 2:
                    PF("Ingrese el valor de B:\n");
                    fflush(stdin);
                    SC("%d",&valorb);
                break;
            case 3:
                   suma(valora,valorb);
                break;
            case 4:
                    resta(valora,valorb);
                break;
            case 5:
                    dividir(valora,valorb);
                break;
            case 6:
                    multiplicar(valora,valorb);
                break;
            case 7:
                    factorial(valora);
                break;
            case 8:
                    suma(valora,valorb);
                    resta(valora,valorb);
                    dividir(valora,valorb);
                    multiplicar(valora,valorb);
                    factorial(valora);
                break;
            case 9:
                    flag =1;
                break;
        }

}
    return 0;
}
