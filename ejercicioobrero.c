/*CALCULAR EL NUEVO SALARIO DE UN OBRERO SI OBTUVO UN INCREMENTO DEL 25%
SOBRE SU SALARIO ANTERIOR*/

#include <stdio.h>

int main (){

    float nuevosalario, salarioanterior, incremento;

    printf("Ingresar salario anterior: ");
    scanf("%f", &salarioanterior);

    incremento = salarioanterior * 0.25;
    nuevosalario = incremento + salarioanterior;

    printf("El salario nuevo es: $%.2f", nuevosalario);



    return 0;
}