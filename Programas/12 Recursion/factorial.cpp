// program name
// program description

#include<iostream>
using namespace std;

long double factorial (long double num);  // prototipo

int main(void)
{
    int numero;
    cout << "Ingrese el numero: ";
    cin >> numero;

    cout << "El factorial del numero es: " << factorial(numero) <<endl ;
    return 0;
}

long double factorial (long double num){
    long double retorno;
    
    if(num == 0) // caso base
        return 1;
    else  //caso recursivo
        retorno = num * (factorial(num-1));

    return retorno;
} 