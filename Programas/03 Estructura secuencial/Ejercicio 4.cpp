// Una tienda ofrece un descuento del 15%, un cliente quiere saber cuanto debe pagar

#include <iostream>
using namespace std;

int main(void) {
	int descuento = 15;
	float compra;
	float precioFinal;
	
	cout << "Ingrese el monto de la compra: ";
	cin >> compra;
	
	precioFinal = compra * (1 - (float)descuento/100);
	
	cout << "\nEl monto de la compra fue: " << compra << "$" << endl; 
	cout << "El precio final es: " << precioFinal << "$"; 
	
	return 0;
}

