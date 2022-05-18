// Ejercicio 3
// Hacer un programa que dado un rdio calcule el area y la longitud de la circunferencia 

#include <iostream>
#include<cmath> // funciones matematicas

using namespace std;

int main(void) {	
	
	float radio = 0;
	float area = 0;
	float perimetro = 0;
	const float pi = 3.1416;
	
	cout << "Ingrese el radio: ";
	cin >> radio;
	area =  pow(radio,2) * pi; // pow(base,exponente)
	perimetro = radio * 2 * pi;
	
	cout << "\n El area de la circunferencia es: " << area << endl;
	cout << "El perimetro de la circunferencia es: " << perimetro ; 
	
	return 0;
}
