// ingrese un numero entero y reportar si es par o impar

#include <iostream>
using namespace std;

int main(void) {
	int numero;
	
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	
	if (numero % 2)
		cout << "El numero ingresado es impar";
	else
		cout << "El numero ingresado es par";
		
	return 0;
}

