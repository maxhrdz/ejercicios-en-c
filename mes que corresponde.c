//MOSTRAR LOS MESES DEL ANO , PIDIENDOLE A USUARIO UN NUMERO ENTRE (1-12) Y MOSTRAR EL MES AL QUE CORRESPONDE

#include <stdio.h>

int main (){

    int numero;

    printf("Escribir el numero del mes (1-12) :");
    scanf("%i", &numero);


    switch (numero) {
    case 1 : printf("Enero"); break ; 
    case 2 : printf("Febrero"); break ; 
    case 3 : printf("Marzo"); break ; 
    case 4 : printf("Abril"); break ; 
    case 5 : printf("Mayo"); break ; 
    case 6 : printf("Junio"); break ; 
    case 7 : printf("Julio"); break ; 
    case 8 : printf("Agosto"); break ; 
    case 9 : printf("Septiembre"); break ; 
    case 10 : printf("Octubre"); break ; 
    case 11 : printf("Noviembre"); break ; 
    case 1 : printf("Diciembre"); break ; 
    default : printf("El numero del mes no existe: ");
    }





    return 0;

}