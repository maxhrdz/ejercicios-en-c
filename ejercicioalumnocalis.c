/* UN ALUMNO DESEA SABER CUAL SERA SU CALIFICACION FINAL DE LA MATERIA DE ALGORITMOS
DICHA CALIFICACION SE COMPONE DE LOS SIGUIENTES PORCENTAJES:
55% DEL PROMEDIO DE SUS 3 CALIFICACIONES PARCIALES
30% DE LA CALIFICAICON DEL EXAMEN FINAL
15% DE LA CALIFICACION DE UN TRABAJO FINAL*/

#include <stdio.h>

int main (){

    float calfinal, parciales, parcialfin, parcial1, parcial2, parcial3, examen, examenfinal, trabajo, trabajofinal;

    printf( "Introduce la calificacion del parcial 1: ");
    scanf("%f", &parcial1);
    printf( "Introduce la calificacion del parcial 2: ");
    scanf("%f", &parcial2);
    printf( "Introduce la calificacion del parcial 3: ");
    scanf("%f", &parcial3);

    parciales = (parcial1 + parcial2 + parcial3)/3;
    parcialfin = parciales * 0.55;

    printf( "Introduce la calificacion del examen : ");
    scanf("%f", &examen);

    examenfinal = examen * 0.30;

    printf( "Introduce la calificacion del trabajo final : ");
    scanf("%f", &trabajo);

    trabajofinal = trabajo * 0.15;


    calfinal = trabajofinal + examenfinal + parcialfin;

    printf("Su calificacion final es: %.2f", calfinal);




    return 0 ;


}