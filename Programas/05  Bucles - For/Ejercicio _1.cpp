// Calcular el factorial de n

#include <iostream>
using namespace std;

int main(void) {
	int n;  // el numero del cual quiero calcular el factorial
	double factorial = 1;
	
	cout << "Introduzca el entero para cacular su factorial: ";
	cin >> n;
	
	if (n < 1){
		cout << "El factorial de 0 es: 1 ";
	return 0;
	}
	
	while (n >= 1) {
		factorial = factorial * n;
		n--;
	} 
	cout << "El factorial es: " << factorial;
	
	return 0;
}

