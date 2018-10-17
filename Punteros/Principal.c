#include "Principal.h"

int main() {

	int dia = 0;
	int mes = 0;
	int anio = 0;

	int dia2 = 0;
	int mes2 = 0;
	int anio2 = 0;

	///////////////////////////////////Ejercicio 1///////////////////
	do {
		printf("Introduce el dia\n");
		scanf_s("%d", &dia);
	} while (dia <1  || dia >31 );

	do {
		printf("Introduce el mes\n");
		scanf_s("%d", &mes);
	}while (mes < 1 || mes > 12);
	
	do {
		printf("Introduce el anio\n");
		scanf_s("%d", &anio);
	} while (!(anio >= 1900 && anio<= 2500));
	

	//calcularDiaSiguiente(&dia,&mes,&anio); //  & direccion de memoria le paso donde estan las variables 
	//imprimir(&dia, &mes, &anio);


	///////////////////////////////////Ejercicio 2///////////////////

	do {
		printf("Introduce el dia 2 \n");
		scanf_s("%d", &dia2);
	} while (dia2 <1 || dia2 >31);

	do {
		printf("Introduce el mes 2\n");
		scanf_s("%d", &mes2);
	} while (mes2 < 1 || mes2 > 12);

	do {
		printf("Introduce el anio 2\n");
		scanf_s("%d", &anio2);
	} while (!(anio2 >= 1900 && anio2 <= 2500));


		printf("%d dias de diferencia entre ambas fechas.\n", cuenta_dias(fecha1, fecha2));
		return 0;
	}


	return 0;

}

void imprimir(int *dia,int *mes,int *anio) {


	printf("El dia siguiente es %d:%d:%d",*dia,*mes,*anio);




}