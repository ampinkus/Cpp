// Ejercicio 1
// Implementar un programa de busqueda secuencial
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
int arreglo[100]; // arreglo para buscar el numero
int i; //indice
int posicion; //indice
bool encontrado = false; // si se encontró el numero es verdadero, digo que no se encontró
int valor; // el numero que estoy buscando

cout << "Ingrese el numero a buscar: ";
cin >> valor;

for ( i = 0 ; i < 100 ; i++)
        arreglo[i] = ( rand() % 100 ) + 1; // genero aleatorios entre 0 y 100

i = 0; // voy a recorrer el arreglo desde 0
while (i < 100 && !encontrado ) // el loop se interrumpe si se llego al fin del arreglo o si se encontró el numero
{
    if (arreglo[i] == valor) { // si encontré el numero buscado pongo encontrado en verdadero
        encontrado = true;
        posicion = i; 
    }
    i++;
}

if (encontrado) 
    cout << "Encontre el numero en la posicion: " << posicion << endl;
else 
    cout << "No encontre el numero a buscar";


return 0;
}
