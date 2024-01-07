/* DADA UNA NOTA DE UN EXAMEN MEDIUANE UN CODIGO ESCRIBIR EL LITERAL QUE LE CORRESPONDE A LA NOTA

A - excelente
B - notable 
C - aprobado
D y F - Reprobado 

*/

#include <stdio.h>

int main (){

    char calificacion;

    printf("Digite su calificacion: ");
    scanf("%c", &calificacion);


    switch (calificacion){
    case 'A' : printf("Excelente") ; break ;
    case 'B' : printf("Notable") ; break ;
    case 'C' : printf("Aprobado"); break ;
    case 'D' : 
    case 'F' : printf("Repobado"); break ;
    default : printf("No existe esta calificacion");
    }




    return 0;

}