// ejercicio3
// elevar un numero a una potencia por recursion

#include<iostream>
using namespace std;

long double potencia(long double base, int exponente);  // prototipo

int main(void)
{
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    cout << base << " elevado a: " << exponente << " es: " <<  potencia(base, exponente) <<endl ;
    return 0;
}

long double potencia (long double base, int exponente){
    long double retorno;
    
    if(exponente == 0) // caso base
        return 1;
    else  //caso recursivo
        retorno = base * potencia(base, exponente - 1 );

    return retorno;
} 