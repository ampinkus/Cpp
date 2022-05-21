// ejercicio1
// hacer un programa que pida un nombre y luego muestre el nombre entre asteriscos version (usamos punteros)

#include<iostream>
using namespace std;

void asteriscos( int *largo); // defino un puntero para pasar posicion de memoria del argumento en vez del valor del mismo

int main(void)
{
    string nombre; // variable para el nombre
    int largo; // longitud del nombre

    cout <<"Ingrese su nombre: ";
    cin >> nombre;
    largo = (int)nombre.length();

    asteriscos(&largo); // paso la dirección de memoria a la función
    cout << nombre << endl; 
    asteriscos(&largo);

    cout << "";
    return 0;
}

void asteriscos(int *largo) { // el nombre del argumento no necesariamente debe coincidir con el nombre de la viariable que le pasa el programa! 
    for ( int i = 1 ; i <= *largo; i++)
        cout << "*";
    cout << endl;
}