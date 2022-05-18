// Ejercicio 11 (Ciclo Repetir ? Hasta Que): 
// Imprimir la serie de los "N" términos de la serie de Fibonacci. (Diagrama de Flujo) 
// 0  1  1  2  3  5  8  13  21 . . .

#include<iostream>
using namespace std;

int main() {
	double fibo, fibo_ant, j;
	int i, n;
	
	i = 1;
	fibo_ant_ant = 0;
	fibo_ant = 1;
	
	cout << "Ingresar (n > 3) el termino maximo de la serie: ";
	cin >> n;
	
	// Los dos primeros valores los imprimimos de entrada
	cout << "0" << endl;
	cout << "1" << endl;
	
	do {
		// calculo el tercer termino 0 + 1
		fibo = fibo_ant + fibo_ant_ant;
		// para los siguientes terminos reemplazo hacia atras los valores
		fibo_ant_ant = fibo_ant;
		// para los siguientes terminos reemplazo hacia atras los valores
		fibo_ant = fibo;
		// incremento en 1 el termino de la serie
		i = i+1;
		cout << fibo << endl;
	} while (i <= (n-2)); 
	return 0;
}

