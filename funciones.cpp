#include <cmath>
#include <iostream>
#include <stdlib.h>


using namespace std;

/* 
	Calcular potencia:
	Entradas: (Tipo Entero) la base y el exponente.
	Salida: (Tipo Entero) Retorna la base elevada al exponente.
*/

int calcular_potencia (int base, int exponente){
	
	int resultado = 1;
	for (int i = 1; i <= exponente; i++){
		resultado *= base;
	}
	return resultado;
}


/* 
	Busqueda secuencial:
	Entradas: (Tipo Entero) un número N, un arreglo de Cardinalidad N, un número N2.
	Salida: (Tipo Entero) Retorna la posición del elemento n2 en el arreglo.
*/

int busqueda_secuencial (int arreglo[],int n, int elemento){
	
	int i = 0;
	while (i <= n){	
		if (arreglo[i] == elemento){
			return i;
		}
		i++;
	}
	return -1;
}


/* 
	Ordenamiento burbuja:
	Entradas: (Tipo Entero) un número N, un arreglo de Cardinalidad N.
	*Sin Salida.
	Objetivo: Ordenar los elementos del arreglo de menor a mayor.
*/

void ordenamiento_burbuja (int arreglo[], int n){
	
	for (int i = 0; (i) <= (n-2); i++){
		for (int j = 0; (j) <= (n-2-i); j++){
			if (arreglo[j + 1] < arreglo[j]){
				swap(arreglo[j], arreglo[j + 1]) ; 
			}
		}
	}
}

/* 
	Ordenamiento Selección:
	Entradas: (Tipo Entero) un número N, un arreglo de Cardinalidad N.
	*Sin Salida.
	Objetivo:  Ordenar los elementos del arreglo de menor a mayor.
*/

void ordenamiento_seleccion ( int arreglo[], int n){

	for (int i = 0; (i) <= (n - 2); i++){
		int min = i;

		for (int j = i + 1; (j) <= (n - 1); j++){
			if (arreglo[j] < arreglo[min]){
				min = j;
			}
		}
		swap(arreglo[i], arreglo[min]);
	}
}

/* 
	Emparejamiento Cadenas:
	Entradas: (Tipo Entero) un número N, un arreglo de Cardinalidad N.
				un número M, un arreglo de Cardinalidad M.
	Salida: (Tipo Entero) retorna la posición del arreglo en donde haya coincidencia entre cadenas.
			De lo contrario -1
*/

int emparejamiento_cadenas (char cadena[], int n, char cadena2[], int m){

	for (int i = 0; (i) <= (n - m); i++){
		int j = 0;

		while ( (j < m) && (cadena2[j] == cadena[i + j])){
			j = j + 1;
		}
		
		if (j == m){
			return i;
		}
	}
	return -1;
}

/* 
 	Crear Arreglo:
	Entradas: (Tipo Entero) un número N, un arreglo de Cardinalidad N.
	*Sin Salida.
	Objetivo: Modifica el arreglo, asignando a cada posición un número random entre 1 - 9 .
*/

void crear_arreglo (int arreglo[], int n){
	
	n -= 1;

	for (int i = 0; i <= n; i++){
		arreglo[i] = rand() %10;
	}
}

/* 
	Imprimir Arreglo:
	Entradas: (Tipo Entero) un número N, arreglo de Cardinalidad N.
	*Sin Salida.
	Objetivo: Imprimir todos los elementos de un arreglo.
*/

void imprimir_arreglo(int arreglo[], int n){
	
	n -= 1;

	cout << "[";

	for(int i = 0; i <= n; i++){
		cout << arreglo[i];
		if(i < n){
			cout << ", ";
		} 
	}

	cout << "]" << endl;
}

