#include<stdio.h>

int main (){

    int C;
    int F;
    int Fahrenheit;

    printf("Dar grados en celcius:");
    scanf("%i", &C);

    Fahrenheit = (C * 1.8) + 32;

    printf("La conversion es: %i\n", Fahrenheit);

    return 0;


}