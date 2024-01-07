/*VISUALIZAR LA TARFIA DE LA LUZ SEGUN EL GASTO DE CORRIENTE ELECTRICA.
PARA UN GASTO MENOR DE 1.000kwxh
La tarifa es 1.2, entre 1.000 y 1.850 es 1.0 y mayo de 1.850 es 0.9*/

#include<stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){

    float gasto, tasa;

    printf("Dar el gasto:");
    scanf("%f",&gasto);

    if ( gasto < 1000){
        tasa = TARIFA1;
    }

    if ( gasto > 1000 && gasto < 1850){
        tasa = TARIFA2;
    }

    if ( gasto > 1850){
        tasa = TARIFA3;
    }

    printf("La tasa es: %.2f", tasa);

    return 0;

}