#// Indicar el tamaño de un arreglo por teclado y luego llenarlo de numeros aleatorios de 1 al 100
// al final imprimir todos los valores

#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arreglo[101]; // tamaño maximo arreglo es 100
	int n; // tamaño del arreglo 
	srand(time(NULL)); // inicializo el generador de numeros aleatorios 
	
	cout << "Ingrese el tamaño del arreglo n < 100: ";
	cin >> n;
	if (n > 0  && n < 100){  // terminar si 0 > n o n > 100  
		for ( int i = 0 ; i < n ; i++) 
			arreglo[i] = ( rand() % 100 ) + 1; // aleatorios entre 0 y 100 
	
	for ( int i = 0 ; i < n ; i++) 
		cout << arreglo[i] << " ";
	}
	
	return 0;
}

