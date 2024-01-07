/*HACER PROGRAMA QUE OBTENGA LA MEDIA GEOMETRICA DE TRES NUMEROS*/

#include <stdio.h>
#include<math.h>

int main (){


    float media, num1, num2, num3;

    printf("Introducir numero 1:");
    scanf("%f", &num1);

    printf("Introducir numero 2:");
    scanf("%f", &num2);

    printf("Introducir numero 3:");
    scanf("%f", &num3);


    media = cbrt(num1 * num2 * num3);

    printf("La media geometrica de estos tres numeros es: %.2f", media);


    return 0;
}