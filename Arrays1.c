#include <stdio.h>
#include <time.h> //semilla de tiempo para el tiempo
#include <stdlib.h>  //aleatorio y semilla 
#include <string.h>
#include "funciones.h"
#define INTRO '\n' 
#define BLANCO ' '
#define RAYA '-' 


/* 
* 1- Escribir un programa que llene un array con los numeros enteros comprendidos entre 5 y 25.
*/
void ejercicio1(){	
	
	int i=0;
	int array[21];	
	
	for(i=0;i<=20;i++){
		array[i]=i+5;
		printf("%d\n",array[i]);		
	}	
}

/* 
* 2- Escribir un programa que llene un array con los numeros pares comprendidos entre 1 y 100.
*/
void ejercicio2(){	
	
	int i=0;
	int array[52];
	for(i=1;i<51;i++){		
		array[i]=i*2;
		printf("%d-",array[i]);	
	}	
}	


/* 
* 3- Escribir un programa que llene un array con los numeros comprendidos entre 0 y 100 divisibles por 3.
*/
void ejercicio3(){	
	
	int i=0;
	int array[35];
	for(i=0;i<34;i++){
		array[i]=i*3;
		printf("%d-",array[i]);
	}
}

/* 
* 4- Escribir un programa que llene un array con con 10 numero enteros consecutivos(el primero indicado por el usuario)
* y haga una copia de ese array en otro.
*/
void ejercicio4(){
	
	int i=0;
	int numero=0;
	char array[10];
	int arraycopia[10];
	
	
	
	printf("Introduce el primer numero\n");
	scanf("%d",&numero);
	
	printf("\nArray Original\n");
	for(i=0;i<=9;i++){
		array[i]=numero+i;
		printf("%d-",array[i]);
	}
	printf("\nArray copia\n");
	
	for(i=0;i<strlen(array)-1;i++){
		arraycopia[i]=array[i];
		printf("%d-",arraycopia[i]);	
	}
}

/* 
* 5- Escribir un programa que llene un array con con 10 numero enteros aleatorios comprendidos entre 50 y 100,copie en otro array esos 
*numeros multiplicados por 1.5 y muestre ambos arrays.
* Utilizar para ello la función srandom (time(NULL)) y rand () de las bibliotecas <time.h> (ctime en C++) y <stdlib.h>
*/
void ejercicio5(){
	
	int i=0;
	int aleatorio=0;
	char array[9];
	float arraycopia[9];
	int variable=0;
	
	srand(time(NULL)); //semilla para que coja el tiempo	
	
			
	//printf("%d",variable);
	printf("\nArray Original\n");
	for(i=0;i<10;i++){
		
			do{
				variable=rand()/1000000000.0*50;				
			}while(variable<50||variable>100);
				array[i]=variable;
				
		printf("%d-",array[i]);	
	}	
	
	printf("\nArray copia * 1.5\n");
	for(i=0;i<10;i++){
		arraycopia[i]=array[i]*1.5;
		printf("%.2f-",arraycopia[i]);
	}	
}


/* 
* 6- Escribir un programa que llene un array con con los 20 primeros numeros pares y calcule su suma 
*/
void ejercicio6(){
	
	char array[20];
	int suma=0;
	int i=0;
	
	for(i=0;i<20;i++){		
		array[i]=(i+1)*2;
		suma+=array[i];
		printf("%d-",array[i]);
		
	}
	printf("\nLa suma es :%d",suma);	
}

/* 
* 7- Escribir un programa que tras asignar los numeros -1,1,16,-5,10,16,-4,-25,16,-5,2 y-8 a un array y calcule 
*    independientemente la suma de los numeros negativos y positivos.
*/
void ejercicio7(){
	
	int array[12]={-1,1,16,-5,10,16,-4,-25,16,-5,2,-8};
	int sumapositivos=0;
	int sumanegativos=0;
	int i=0;
	
	for(i=0;i<12;i++){
		if(array[i]<=0){
			sumanegativos+=array[i];		
		}else{
			sumapositivos+=array[i];			
			}
	}
	printf("La suma de los positivos es: %d",sumapositivos);
	printf("\nLa suma de los negativos es: %d",sumanegativos);
}
	
	
/* 
* 8- Escribir un programa que sume independientemente los elementos positivos y negativos de la 
siguiente matriz de 3 x 3 ;
		52 26 -13
		-32 -24 11
		20 -12 13
*/
void ejercicio8(int *puntero1){
	
	
	int i=0;
	int j=0;
	int sumapositivos=0;
	int sumanegativos=0;
	
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("\t%d",*(puntero1));//mostrar array
			
			if(*(puntero1)<0){  //valor del puntero1
				sumanegativos+=*(puntero1);
				
			}else {
				sumapositivos+=*(puntero1);
				
			}
			puntero1++; //avanzo una posicion 
		}//for interno 
		
	}//for externo
		printf("\n\nLa suma de los positivos es: %d",sumapositivos);
		printf("\nLa suma de los negativos es: %d",sumanegativos);	
}


/* 
* 9- Escribir un programa que multiplique por 2 los elementos de la matriz anterior
	void ejercicio9(int array[][])
*/	
void ejercicio9(int *puntero1){	
	
	int j=0;
	
		for(j=0;j<9;j++){
			if(j%3==0){
				printf("\n");
			}
			printf("\t%d",*(puntero1)*2);//mostrar array
			puntero1++;
		}	
}

/* 
* 9-1- Escribir un programa que multiplique por 2 los elementos de la matriz anterior
	void ejercicio9(int array[][]) y que el puntero siempre apunte a la posicion  array[0][0])  .
*/	
void ejercicio9_1(int *puntero1){	

	int j=0;
	for(j=0;j<9;j++){
			if(j%3==0){
				printf("\n");
			}			
			printf("\t%d",*(puntero1+j)*2);//mostrar array			
		}	
	printf("\n%d",*(puntero1));
}


/* 
* 10- Escribir un programa que divida todos los elementos de una matriz (3,4) por el elemento situado en la posicion (2,2).
*/	
void ejercicio10(){
	
	int array[3][4];
	int divisor=0;
	int i=0;
	int j=0;
	int numero=0;
	int contador=1;
	
	printf("Introduce numeros hasta rellenar la matriz\n");
	do
	{	
	printf("i:%d-j:%d\n",i,j);	
		scanf("%d",&numero);
		contador++;
		
		array[i][j]=numero;
		
		if( j<4){
			j++;
		}
		if(j>3){
			j=0;
			i++;											
		}
	}			
	while(contador!=13);
	
	//matriz original
	for(i=0;i<3;i++){
		
		for(j=0;j<4;j++){
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	
	//matriz dividida por la posicion [2][2]
	printf("\n");
	
	divisor=array[2][2];
	
	for(i=0;i<3;i++){		
		for(j=0;j<4;j++){
			
			printf("%d",array[i][j]/divisor);
		}
		printf("\n");
	}
}	


/* 
* 10-1 -Escribir un programa que divida todos los elementos de una matriz (3,4) por el elemento situado en la posicion (2,2).
	Usando punteros 
*/	
void ejercicio10_1(int *puntero1){
	
	//printf("Puntero %p \n",(puntero1));
	inicializar(puntero1);	
	//printf("Puntero2 %p \n",(puntero1));
	//puntero1=puntero1-11;    quiero que puntero 1 apunte a la direccion [0][0] pero no puedo usar el array
	//					pero al ser una copioa no me hace falta por que sigue apuntando a ala paosicion inicial
	//printf("Puntero3 %p \n",(puntero1));
	//printf("%d",*(puntero1));
	mostrarpuntero(puntero1);
	dividirpuntero(puntero1);
	mostrarpuntero(puntero1);
	
}

/* 
* 10-2 -Escribir un programa que divida todos los elementos de una matriz (3,4) por el elemento situado en la posicion (2,2).
	Usando punteros Y SIN MOVER EL PUNTERO DE LA POSICION [0][0]
	*/
void ejercicio10_2 (int *puntero1){
	
	rellenarpuntero(puntero1);
	mostrarpuntero2(puntero1);
	dividirpuntero2(puntero1);
	mostrarpuntero2(puntero1);
	
	
}


int main(int argc, char** argv){

	//int array[3][3]={52,26,-13,-32,-24,11,20,-12,13};
	//int *puntero1=NULL;//inicializo puntero
	//ejercicio1();
	//ejercicio2();
	//ejercicio3();
	//ejercicio4();
	//ejercicio5();
	//ejercicio6();
	//ejercicio7();
	
	//puntero1=&array[0][0];//quiero que puntero 1 apunte a las direccion [0][0] del array
	//ejercicio8(puntero1);
	
	//puntero1=&array[0][0];//quiero que puntero 1 apunte a las direccion [0][0] del array
	//ejercicio9(puntero1);
	
	//puntero1=&array[0][0];//quiero que puntero 1 apunte a las direccion [0][0] del array
	//ejercicio9_1(puntero1);
	
	//ejercicio10();
	
	int array[3][4];
	int *puntero1=NULL;//inicializo puntero
	puntero1=&array[0][0];//quiero que puntero 1 apunte a las direccion [0][0] del array
	//ejercicio10_1(puntero1);
	ejercicio10_2(puntero1);
	
	
	
	
return 0;

}
