/*COMPROBAR SI UN ALUMNO APROBO O NO UN EXAMEN*/

#include<stdio.h>


int main (){

    float calificacion;

    printf("Introducir calificacion: ");
    scanf("%f", &calificacion);

    if( calificacion > 10.5){
        printf("Aprobo la materia");
    }




    return 0;

}