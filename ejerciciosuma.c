/*1. Pedir 2 numeros al usuario y  sumarlos, restarlos y dividirlos. */

#include<stdio.h>

int main (){
    int a;
    int b;
    int suma = 0; 
    int resta = 0;
    int multi = 0;
    int div = 0;

    printf("Dar dos numeros");
    scanf("%i %i", &a, &b);

    suma = a =+ b; 
    resta = a =- b;
    multi = a * b;
    div = a / b;

    printf("La suma es: %i", suma);
    printf("La resta es: %i", resta);
    printf("La multiplicacion es: %i", multi);
    printf("La division es: %i", div);

    return 0;

}