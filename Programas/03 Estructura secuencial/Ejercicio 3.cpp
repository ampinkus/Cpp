// haga un programa que calcule dado el numero de hombres y mujeres el % de cada uno.

#include <iostream>
using namespace std;

int main(void) {
	int mujeres;
	int hombres;
	float porcMujeres;
	float porcHombres;
	
	cout << "Ingrese el numero de mujeres: ";
	cin >> mujeres;
	
	cout << "Ingrese el numero de hombres: ";
	cin >> hombres;
	
	porcMujeres = ((float)mujeres / (hombres + mujeres) * 100); // convierto a mujeres y hombres en float para no perder decimales
	porcHombres = ((float)hombres / (hombres + mujeres) * 100);
	
	cout << "\nEl % de mujeres es: " << porcMujeres << "%" << endl; 
	cout << "El % de hombres es: " << porcHombres << "%"; 
	
	return 0;
}

