/*SELECCIONAR UN TIPO DE VEHICULO E INDICAR EL PEAJE A PAGAR SEGUN UN VALOR NUMERICO
1 - TURISMO, PEAJE = $500
2 - AUTOBUS, PEAJE = $3000
3 - MOTOCICLETA, PEAJE = $300
CASO CONTRARIO - VEHICULO NO AUTORIZADO*/

#include<stdio.h>

int main(){
    
	int tipo_vehiculo,peaje;
	
	printf("Digite el tipo del vehiculo: "); 
	scanf("%i",&tipo_vehiculo);
	
	switch(tipo_vehiculo){
		case 1: peaje = 500;
				printf("Turismo $%i",peaje);break;
		case 2: peaje = 3000;
				printf("Autobus $%i",peaje);break;
		case 3: peaje = 300;
				printf("Motocicleta $%i",peaje);break;
		default: printf("Vehiculo no autorizado");		
	}	
	
	return 0;
}
