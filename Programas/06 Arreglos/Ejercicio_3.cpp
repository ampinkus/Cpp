//Ejercicio 3
// Crea un arreglo unidimensional con "N" numeros, lee los eleemntos por teclado, gusrdalos en el arreglo
// calcula cual es el mayor y el menor de todos  

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int arreglo[10];  // creo un arreglo de 10 numeros
	int mayor; // El numero mayor
	int menor; // el numero menor
	
	for(int i = 0; i <= 9; i++) { // ingreso los datos del arreglo
		cout << "ingrese un numero entero para el arreglo[" << i <<"]: " ;
		cin >> arreglo[i];
	}
	
	mayor = arreglo[0];
	menor = arreglo[0];	
	for(int i = 0; i <= 9; i++) { // busco el mayor y el menor
		if ( arreglo[i] > mayor)
			mayor = arreglo[i];
		else if (arreglo[i] < menor)
			menor = arreglo[i];
	}
	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor;
	
	return 0;
}

