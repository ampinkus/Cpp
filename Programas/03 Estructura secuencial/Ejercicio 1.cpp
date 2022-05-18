// Ejercicio 1:  Calcular la cantidad de segundos que está incluida en el numeor de horas, minutos y segundos que ingresa un usuario

#include <iostream>
using namespace std;

int main(void) {
	
	int horas = 0;
	int minutos = 0;
	int segundos = 0;
	
	cout << "Ingrese las horas: ";
	cin >> horas;
	cout << "Ingrese los minutos: ";
	cin >> minutos;
	cout << "Ingrese los segundos: ";
	cin >> segundos;
	
	segundos = horas * 3600 + minutos * 60 + segundos;
	cout << "La cantidad total de segundos es: " << segundos;
	
	return 0;
}

