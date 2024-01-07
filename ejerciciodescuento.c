/* UNA TIENDA OFRECE UN DESCUENTO DEL 15% SOBRE EL TOTAL DE LA COMPRA Y UN CLIENTE DESEA
SABER CUANTO DEBERA PAGAR FINALMENTE POR SU COMPRA*/

#include<stdio.h>

int main (){

    float totalcompra, descuento, precio;

    printf("Dar el total de la compra: ");
    scanf("%f", &totalcompra);

    descuento = totalcompra * 0.15;
    precio = totalcompra - descuento;

    printf("El precio final de la compra es: $%.2f", precio);

    





    return 0;

}