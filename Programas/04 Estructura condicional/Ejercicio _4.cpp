// Elaboror una programa que me muestre los d�as de la semana cuando ingrese los 7 primeros numeros

#include <iostream>
using namespace std;

int main(void) {
	int numeroDia;  // el numero dle d�a
	
	cout << "Ingrese el numero lel d�a de la semana (1 <= numero <= 7): ";
	cin >> numeroDia;
	
	switch(numeroDia){
	case 1:
	cout << "Es Lunes";
	break;
	
	case 2:
	cout << "Es Martes";
	break;
	
	case 3:
	cout << "Es Miercoles";
	break;
	
	case 4:
	cout << "Es Jueves";
	break;
		
	case 5:
	cout << "Es Viernes";
	break;
		
	case 6:
	cout << "Es Sabado";
	break;
		
	case 7:
	cout << "Es Domingo";
	break;
	
	default:
	cout << "En numero debe estar entre 1 y 7";
	}
	
	return 0;
}

