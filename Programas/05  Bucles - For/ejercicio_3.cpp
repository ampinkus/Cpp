// Hacer un programa que le pida N numeros al usuario, hasta que el usuario lo decida.
// luego calcular el promedio de dichos numeros 

#include <iostream>
using namespace std;
int main(void){

	int n = 1;
	float numero;
	float suma = 0;
	
	cout << "ingrese cuantos numeros quiere calcular el promedio: ";
	cin >> n;
	
	for (int i = 1; i <= n ; i++){
		cout <<"Ingrese el numero " << i << ": " ;
		cin >> numero;
		suma += numero;
	} 
	
	cout << "La suma es: " << suma << endl ; 
	cout << "El promedio es: " << suma / n ; 

	return 0;
}

