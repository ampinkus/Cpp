// program name
// program description

#include<iostream>
#include"Punto.h"
using namespace std;

int main(void)
{
	// creamos una instancia del objeto Punto de forma estática con el cosntructor1. 
	Punto punto1(3,4); // Al ser estático se guarda en el stack 
	cout << "El valor de x1 es: " << punto1.getX() << endl;
	cout << "El valor de y1 es: " << punto1.getY() << endl;

	// probamos modificar la coordenada x de Punto1 fuera del método, si ejecutamos el programa no va cambiar su valor!
		// punto1.x = 10;

	// creamos una instancia del objeto Punto de forma dinamica con el cosntructor1. 
	Punto *punto2 = new  Punto();  // Al ser dinamico se crea con un puntero y se guarda en el heap
	cout << "El valor inicial de x2 es: " << punto2 -> getX() << endl;
	cout << "El valor inicial de y2 es: " << punto2 -> getY() << endl; 

	punto2->setX(-2); // le asigno al punto2 coordenadas nuevas
	punto2->setY(-4);
	cout << "El valor de x2 es ahora: " << punto2 -> getX() << endl; // imprimo las coordenadas
	cout << "El valor de y2 es ahora: " << punto2 -> getY() << endl;

	punto2->setX(0); // le asigno al punto2 coordenadas nuevas
	punto2->setY(0);
	cout << "El valor de x2 es ahora: " << punto2 -> getX() << endl; // imprimo las coordenadas
	cout << "El valor de y2 es ahora: " << punto2 -> getY() << endl;
	
	return 0;
}