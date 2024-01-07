//SACA LA HIPOTENUSA DE UN TRINAGULO PIDIENDO A USUARIO EL VALOR DE LOS 2 CATETOS

#include <stdio.h>
#include <math.h>

int main (){

    float hipotenusa;
    float a;
    float b;

    printf("Dame el valor de los catetos:");
    scanf("%f %f", &a, &b);

    hipotenusa = sqrt(pow(a,2)+pow(b,2));

    printf("La hipotenusa del triangulo es: %.2f\n", hipotenusa);





    return 0;

}