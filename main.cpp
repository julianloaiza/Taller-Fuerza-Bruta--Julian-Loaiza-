/* 
	Autor: Julián Andrés Loaiza Ospina
	Log: Agosto 10 2017: Creación
		 Agosto 12 2017: Ordenamiento Burbuja
		 Agosto 13 2017: Implementación del main
		 Agosto 14 2017: Ordenamiento de seleccion y Emparejamiento de cadenas
		 Agosto 17 2017: Comentarios, documentación
	Descripción: Programa Taller Fuerza bruta
*/

#include "funciones.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

	int resultado, elemento;
	int n = 8; //Cardinalidad de arreglo
	int arreglo[n];
	crear_arreglo(arreglo, n);
	int opcion= -1;

	while (opcion != 0) {
		cout << "\n Escriba la opcion: \n 0) Salir \n 1) Calcular Potencia \n ";
		cout << "2) Busqueda Secuencial \n 3) Ordenamiento Burbuja \n";
		cout << " 4) Ordenamiento de Seleccion \n 5) Empajeramiento de Cadenas"<< endl;
		cin >> opcion;

		switch (opcion) {
			case 0: return 0;
				break;

			case 1: 
				int base, exponente;
				cout <<" Base: ";
				cin >> base;
				cout << "exponente: ";
				cin >> exponente;
				resultado = calcular_potencia (base, exponente);
				cout << "El resultado es:" << resultado << endl;
				break;

			case 2:
				cout << "Ingrese el elemento a buscar: ";
				cin >> elemento ;
				resultado = busqueda_secuencial (arreglo, n, elemento);
				cout << "El elemento se encuentra en la posicion: "<< resultado << endl;
				imprimir_arreglo(arreglo, n);
				break;

			case 3:
				imprimir_arreglo(arreglo, n);
				ordenamiento_burbuja (arreglo, n);
				imprimir_arreglo(arreglo, n);
				break;

			case 4:
				imprimir_arreglo(arreglo, n);
				ordenamiento_seleccion (arreglo, n);	
				imprimir_arreglo(arreglo, n);				
				break;

			case 5:
				char cadena[] = "Hello"; // 2 Cadenas iguales para comprobar que...
				char cadena2[] = "Hello"; // ...funciona de manera correcta
				cout << cadena << " " <<cadena2 << endl;
				cout << emparejamiento_cadenas(cadena, 4, cadena2, 4);
				break;
		}			

	}
	return 0;
}