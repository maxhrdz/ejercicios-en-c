


#include  <stdio.h>


int main (){

    int numero;

    printf("Digite un numero entre (1-3): ");
    scanf("%i", &numero);

    switch(numero){
        case 1 : printf("\nEs el numero 1"); break;
        case 2 : printf("\nEs el numero 2"); break;
        case 3 : printf("\nEs el numero 3"); break;
        default : printf("No a digitado un numero correcto");
    }








    return 0;
}
