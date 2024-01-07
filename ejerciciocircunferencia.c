//CALCULAR LA CIRCUNFERENCIA 
#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main (){

    float circunferencia;
    float radio;

    printf("Dar el radio de un circulo: ");
    scanf("%f", &radio);

    circunferencia = 2 * PI * radio;


    printf("La circunferncia del circulo es: %.2f\n", circunferencia);




    return 0;


}