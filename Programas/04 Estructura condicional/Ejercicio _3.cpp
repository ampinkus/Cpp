// pedir al usuario 3 numeros enteros e imprimir el mayor de los 3

#include <iostream>
using namespace std;

int main(void) {
	int numero1, numero2, numero3;
	
	cout << "Ingrese las 3 numeros enteros separadas por un espacio en blanco ";
	cin >> numero1 >> numero2 >> numero3;
	
	if (numero1 > numero2  && numero1 > numero3) // comparamos el primero con el segundo y el tercero
			cout << "El mayor es: " << numero1;
	else if (numero2 > numero3) //numero2 es mayor al 1 y al 3 // comparamos el segundo con el tercero
			cout << "El mayor es: " << numero2;
	else
		cout << "El mayor es: " << numero3; // el numero mayor es el 3 tiene que ser mayor al 1 y al 2
	
	return 0;
	
}

