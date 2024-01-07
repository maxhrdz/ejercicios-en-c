/*INGRESE UN NUMERO Y CALCULE E IMPRIMA SU RAIZ CUADRADA. SI EL NUEMRO ES NEGATIVO IMPRIMA EL NUMERO
Y UN MENSAJE QUE DIGA " TIENE RAIZ IMAGINARIA"*/

#include<stdio.h>
#include<math.h>

int main (){

    int num;
    float raiz;

    printf("Ingrese un numero:");
    scanf("%i", &num);

    if ( num > 0){
        raiz = sqrt(num);
    printf("La raiz de %i es %.2f", num, raiz);
    }
    else{
    printf("El numero %i, tiene raiz imaginaria", num);
    }

    return 0;
}
