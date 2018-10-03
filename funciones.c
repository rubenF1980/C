#include <stdio.h>
#include "funciones.h"
#include <math.h>
#define DESCUENTO 15.0



/**
*Eercicio 10_1
*@param *puntero1 
*/
void inicializar(int *puntero1) {
	
	int contador=1;
	int numero=0;
	
	do {
		printf("Introduce numeros hasta rellenar la matriz\n");
		scanf("%d",&numero);
		*(puntero1)=numero;//asigno a la primera posicion el valor del primer numero introducido
		contador++;
		//printf("%d",*(puntero1));
		puntero1++;//para desplazar por el puntero y ir rellenandolo 
	}while(contador!=13);
	
}


void mostrarpuntero (int *puntero1){
	
	int i=0;
	

	for(i=0;i<12;i++){	
		
			if (i%3==0)
			printf("\n");	
			printf("%d",*(puntero1));
			puntero1++;
	}
	
}

void dividirpuntero (int *puntero1){
	
	int i=0;
	int divisor=*(puntero1+10);
	for(i=0;i<12;i++){	
		
			if (i%3==0)
			printf("\n");	
			*(puntero1)=*(puntero1)/divisor;		
			puntero1++;
	}
	
}

/**
*Eercicio 10_2
*@param *puntero1 
*/
void rellenarpuntero (int *puntero1){
	
	int numero=0;
	
	int i=0;		
	for(i=0;i<12;i++){
		printf("introduce numeros\n");
		scanf("%d",&numero);
		*(puntero1+i)=numero;
				
		}		
	
	
}

void mostrarpuntero2 (int *puntero1){
	
	int i=0;

	for(i=0;i<12;i++){	
		if (i%3==0){
			printf("\n");
		}
		printf("%d",*(puntero1+i));
			
	}
	
}

void dividirpuntero2(int *puntero1){
	
	
	int i=0;	
	int divisor=*(puntero1+10);
	for(i=0;i<12;i++){	
		
		if (i%3==0)
			printf("\n");	
			*(puntero1+i)=*(puntero1+i)/divisor;		
			
	}
	
}





