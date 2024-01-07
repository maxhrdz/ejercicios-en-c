/*DADAS LAS HORAS TRABAJADAS DE UNA PERSONA Y EL VALOR POR HORA, CALCULAR SU SALARIO E IMPRIMIRLO*/

#include<stdio.h>

int main(){

    float salario, horas, valorhora;

    printf("Dar las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Dar el valor por hora: ");
    scanf("%f", &valorhora);

    salario = horas * valorhora;

    printf("Su salario es: $%.2f", salario);

    
    
    
    return 0;

    
    }