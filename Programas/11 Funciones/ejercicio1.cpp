// ejercicio1
// hacer un programa que pida un nombre y luego muestre el nombre entre asteriscos version por valor

#include<iostream>
using namespace std;

void asteriscos( int longitud);


int main(void)
{
    string nombre;

    cout <<"Ingrese su nombre: ";
    cin >> nombre;

    asteriscos( (int)nombre.length());
    cout << nombre << endl; 
    asteriscos( (int)nombre.length());

    cout << "";
    return 0;
}

void asteriscos(int longitud) {
    for ( int i = 1 ; i <= longitud; i++)
        cout << "*";
    cout << endl;
}