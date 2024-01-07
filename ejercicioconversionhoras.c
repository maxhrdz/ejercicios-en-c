/*CALCULAR LA CANTIDAD DE SEGUNDOS QUE ESTAN INCLUIDOS EN EL NUMERO DE HORAS, MINUTOS Y SEGUNDOS 
DADOS POR EL USUARIO*/

#include<stdio.h>

int main (){


    int horas, minutos, segundos, t1, t2, t3, totalseg;

    printf("Dar el numero de horas:");
    scanf("%i", &horas);

    printf("Dar el numero de minutos:");
    scanf("%i", &minutos);

    printf("Dar el numero de segundos:");
    scanf("%i", &segundos);

    t1 = horas * 3600;
    t2 = minutos * 60;
    t3 = segundos * 1;

    totalseg = t1 + t2 + t3;

    printf("El total de segundos es: %i", totalseg);


    return 0;

}