/*DETERMINAR SI UN NUMERO ES PAR O IMPAR*/

#include<stdio.h>

int main (){

    int numero ;

    printf("Introducir numero: ");
    scanf("%i", &numero );

    if ( numero % 2 == 0)
    {
        printf("El numero %i es par", numero);
    }
    else
    {
        printf("El numero %i es impar", numero);
    }
    






    return 0;
}
