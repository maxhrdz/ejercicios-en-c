//PROGRAMA PARA CALULAR EL AREA DE TRAPECIOS

#include<stdio.h> 


    int main (){


    int basemayor, basemenor, altura, area;

    printf("Dar la base mayor: ");
    scanf("%i", &basemayor);
    printf("Dar la base menor: ");
    scanf("%i", &basemenor);
    printf("Dar la altura: ");
    scanf("%i", &altura);


    area = ((basemayor + basemenor) * altura)/2;

    printf("El area del trapecio es: %i", area);



return 0;

}
