

//EJEMPLO EXPRECION CONDICIONAL : EL OPERADOR ?

#include <stdio.h>

int main (){

    int numero;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    (numero%2==0) ? funcion1() : funcion2();



    return 0;
}


