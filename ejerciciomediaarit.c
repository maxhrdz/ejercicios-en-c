//CALCULAR LA MEDIA ARITMETICA DE 3 NUMEROS DADOS POR EL USAURIO

#include<stdio.h>

int main (){

    float num1, num2, num3, resultado;

    printf("Ingresar los 3 numeros: ");
    scanf("%f %f %f", &num1 , &num2 , &num3);

    resultado = (num1 + num2 + num3) / 3;

    printf("La media de los 3 numeros es: %.2f", resultado);



    return 0;

}