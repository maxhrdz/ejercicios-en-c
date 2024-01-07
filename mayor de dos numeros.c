/* CALCULAR EL MAYOR DE DOS NUMEROS LEIDOS EN EL TECLADO*/



#include<stdio.h>


int main(){

    int num1, num2;

    printf("Escribir 2 numeros:");
    scanf("%i %i", &num1, &num2);

    if ( num1 > num2 ){
        printf ("El numero %i es mayor que %i", num1, num2);
    }
    else if ( num1 > num2 ){
        printf ("El numero %i es mayor que %i", num1, num2);
    }
    else {
        printf("Ambos numeros son iguales");
    }

    return 0;
}