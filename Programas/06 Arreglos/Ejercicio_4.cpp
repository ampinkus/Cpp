//Ejercicio 3
// leer por teclado una serie de 5 numeros reales
// el programa debe indicar si estan en orden creciente, decreciente o desordenados
#include <iostream>
using namespace std;

int main(void) {

	float arreglo[5];  // creo un arreglo de 5 numeros
	float auxiliar; // para comparar el valor siguiente con el anterior
	bool creciente; // orden creciente
	bool decreciente; // orden decreciente

	for(int i = 0; i <= 4; i++) { // ingreso los datos del arreglo
		cout << "ingrese un numero real para el arreglo[" << i <<"]: ";
		cin >> arreglo[i];
	}

	auxiliar = arreglo[0];
	for(int i = 1; i <= 4; i++) { // recorro el arreglo e indico si está en orden creciente o decreciente
		if ( arreglo[i] > auxiliar) { // si el siguiente valor es mayor digo que va en orden creciente
			creciente = true;
			auxiliar = arreglo[i];
		} else if (arreglo[i] < auxiliar) { // si el siguiente valor es menor digo que va en orden decreciente
			decreciente = true;
			auxiliar = arreglo[i];
		}
	}
	if ( creciente && decreciente)
		cout << "Esta desordenado";
	else if (creciente)
		cout << "Esta en orden creciente";
	else
		cout << "Esta en orden decreciente";


	return 0;
}

