// program name
// program description

#include<iostream>
#include"diaAnio.h"
using namespace std;

int main(void)
{
	// creamos una instancia de Mes y Dia c
	diaAnio fechaHoy(5,9); // 5 de Setiembre.
	// Leemos el día y el mes de fecha1
	cout << "El mes de hoy es: " << fechaHoy.getMes() << "  ";
	cout << "El dia de hoy es: " << fechaHoy.getDia() << endl; 
	
	// creamos otra fecha, es la del cumpleaños
	diaAnio cumpleanios1(5,9); // 5 de Setiembre.
	// Leemos la fecha de cumpleaños:
	cout << "El mes de cumpleaños es: " << cumpleanios1.getMes() << "  ";
	cout << "El dia de cumpleaños es: " << cumpleanios1.getDia() << endl; 

	// vemos si la fecha de cumpleaños coincide con la fecha actual
	if(cumpleanios1.getMes() == fechaHoy.getMes() && cumpleanios1.getDia() == fechaHoy.getDia())
		cout << "Feliz Cumpleaños !!!" << endl;
	else
		cout << "No cumplis hoy" << endl;

	// cambiamos el día de fecha1
	fechaHoy.setDia(6); // pasamos al día 6
	// volvemos a ver que día es
	cout << "El mes de hoy es: " << fechaHoy.getMes() << "  ";
	cout << "El dia de hoy es: " << fechaHoy.getDia() << endl;
	// Volvemos a comprobar si cumple años
	if(cumpleanios1.getMes() == fechaHoy.getMes() && cumpleanios1.getDia() == fechaHoy.getDia())
		cout << "Feliz Cumpleaños !!!" << endl;
	else
		cout << "No cumplis hoy" << endl;

	return 0;
}