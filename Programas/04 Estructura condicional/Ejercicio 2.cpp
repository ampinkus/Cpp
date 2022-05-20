// Dererminar si un alumno apturba o no sabiendo que su promedio de 3 calificaciones tiene que ser mayor a 70

#include <iostream>
#include<conio.h>
using namespace std;

int main(void) {
	int nota1, nota2, nota3;
	float promedio;
	
	cout << "Ingrese las 3 notas separadas por un espacio en blanco ";
	cin >> nota1 >> nota2 >> nota3;
	
	promedio = (nota1 + nota2 + nota3)/3;
	
	if (promedio < 70)
		cout << "El alumno reprobo con promedio: " << promedio;
	else
		cout << "El alumno aprobo con promedio: " << promedio << endl;
		
	getch(); // si ejecuto por liena de comando el ejecutable veo el resultado
	return 0;
	
}

