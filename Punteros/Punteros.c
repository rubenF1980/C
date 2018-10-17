#include "Punteros.h"

/*
*1 Escribir un programa que dada una fecha (dia mes y a�o) nos diga la del d�a siguiente
*@param int dia le pasamos el dia 
*@param int mes le pasamos el mes 
*@param int anio le pasamose al a�o
*/
void calcularDiaSiguiente(int *dia, int *mes, int*anio) {

	int diasmes = 0;
	int acumulado = 0;


	if ((*mes) == 2) {
		diasmes = 28;
	}
	else {
		
		if ((*mes) == 4 || (*mes) == 6 || (*mes) == 9 || (*mes) == 11)
		{
		
			//meses de 30 dias abril junio septiembre y noviembre 
			diasmes = 30;
		}
		else
		{
			//el resto tienen 31 dias 
			diasmes = 31;
		}
	}


	if ((*dia) >= diasmes && (*mes) != 12) {
		
		if ((*mes) == 2) {
			if ((*anio) % 4 == 0 && (*anio) % 100 != 0 || (*anio) % 400 == 0){
			(*dia)++;
			}
			else {
				(*mes) += 1;
				(*dia) = 1;
			}
		}else {
			(*mes) += 1;
			(*dia) = 1;
			}
	}else {

		if ((*mes) == 12 && (*dia) == diasmes) {
			(*anio) += 1;
			(*mes) = 1;
			(*dia) = 1;
		}
		else {

			if ((*dia) >= 1 && ((*dia) < 31) && ((*dia) != diasmes)) {
				(*dia) += 1;
			}
			else {
				if ((*mes) >= 1 && (*mes) <= 12 && ((*dia) != diasmes)) {
					(*mes) += 1;
				}
				else {
					if ((*mes) == 12 && (*dia) != diasmes) {
						(*anio) += 1;
					}

				}
			}
		}
	}
}//Calcular dia siguiente 



/*
*2 Escribir un programa que calcule el numero de dias entre dos fechas.
*@param int dia le pasamos el dia
*@param int mes le pasamos el mes
*@param int anio le pasamose al a�o

*/
void calcularDiaEntreFechas(int *dia, int *mes, int*anio,int *dia2, int *mes2,int *anio2) {
	
	int acumulado = 0;
	int diasmes = 0;
	
	if ((*anio == *anio2) && (*mes == *mes2)) {

		acumulado =  (*dia2 - *dia);

	}

	
	if ((*anio == *anio2) && (*mes != *mes2)){ //igual a�o distinto mes 

		if ((*mes) == 2) {
			diasmes = 28;
			acumulado = (diasmes - *dia) + *dia2 +difenciaMesesCompletos(mes,mes2);
		}


		}
		else {

			if ((*mes) == 4 || (*mes) == 6 || (*mes) == 9 || (*mes) == 11)
			{

				//meses de 30 dias abril junio septiembre y noviembre 
				diasmes = 30;
			}
			else
			{
				//el resto tienen 31 dias 
				diasmes = 31;
			}
		}

	
	}


		
	return acumulado;




	
	//funci�n que calcula si es bisiesto un a�o 
	int bisiesto(int anio) {
		if (anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0)) return 1;
		else return 0;
	}


	//funci�n que calculula los dias entre meses completos  
	int difenciaMesesCompletos(int *mes,int *mes2) {
		
		int valor = 0;
		int acumulado = 0;
		
		*mes = *mes + 1;

		while(*mes != *(mes2-1)){		
		
		
		switch(*mes){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			valor= 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			valor =30;
			break;
		case 2:
			valor= 28;
			break;
		*mes = *mes + 1;
		acumulado += valor;
		}
		return acumulado;


			
		


		
		
	}




}