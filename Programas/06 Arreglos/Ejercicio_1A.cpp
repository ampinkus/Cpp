// Indicar el tamaño de un arreglo por teclado y luego llenarlo de numeros aleatorios de 1 al 100
// al final imprimir todos los valores
// Comentario agregado para ver si aparece en Git

#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main(int argc, char *argv[]) {
	int arreglo[200]; // Cambio el tamaño dle arreglo a 200 para ver como aparece en Git
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

