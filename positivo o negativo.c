/*COMPROBAR SI UN NUMERO DIGITADO POR EL USUARIO ES 
POSITIVO O NEGATIVO*/

#include <stdio.h>
 
int main (){

    float numero;

    printf("Dar un numero:");
    scanf("%f", &numero);

    if ( numero < 0){
        printf("El numero es negativo");
    }

    if ( numero > 0){
        printf("El numero es positivo");
    }


    return 0;
}