//PROGRAMA QUE SIMULE UN CAJERO AUTOMATICO CON UN SALDO INICIAL DEL 1000 DOLARES



#include <stdio.h>

int main(){

    int opcion;
    float saldo = 1000;
    float deposito, retiro;

    printf("\tBienvenido al cajero automatico\n");
    printf("\n1. Ingresar a la cuenta\n");
    printf("\n2. Retirar dinero\n");
    printf("\n3. Salir\n");
    printf("\nOpcion:");
    scanf("%i", &opcion);

     switch (opcion)
      { 
        case 1 : printf("Ingresar cantidad a depositar: ");
                 scanf("%f",&deposito );
                 saldo += deposito;
                 printf ("Su saldo total es: %.2f", saldo);

        break;
        case 2:  printf("Ingrese la cantidad a retirar: ");
                 scanf("%f", &retiro);
                 if (retiro > saldo){
                    printf("Cantidad de fondos insuficientes");
                 }
                 else{
                 saldo -= retiro;
                 printf ("Su saldo restante es: %.2f", saldo);
                 }

        break;
        case 3 : break;
        default : printf ("Se equivoco de opcion en el menu");
      }

    
    

    return 0;
}