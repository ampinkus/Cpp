// ingresar un numero y calcular la suma de sus cifras

#include <iostream>
using namespace std;

int main(void) {
	int digito, numero, suma  = 0;
	
	cout << "Introduzca el entero n para cacular la suma de sus cifras (n > 0): ";
	cin >> numero;
	
	while (numero != 0) {
		digito = numero % 10; // modulo 10 de un entero es el menor de sus digitos
		// cout << digito << " ";
		numero /= 10; // al dividir por 10 el siguiente digito pasa ser el menor 
		suma += digito;
	}
	cout << "\nLa suma de los digitos es: " << suma << endl;  

	return 0;
}

