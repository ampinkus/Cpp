// Ejercicio 1
// Implementar un ordenamiento por metodo de burbuja version linux
// nuevo cambio para prueba Git

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{

    int arreglo[1000]; // arreglo para ordenar
    int i ; // auxiliar
    int n; // tamaño del arreglo
    int auxiliar;
    bool ordenado; // me indica si en el arreglo hubo o no intercambios, si no los hubo está ordenado
    srand(time(NULL)); // inicializo el generador de numeros aleatorios

    cout << "Ingresar el tamaño del arreglo a ordenar (2 < n < 1000):  ";
    cin >> n;

    for ( int i = 0 ; i < n ; i++)
        arreglo[i] = ( rand() % 100 ) + 1; // aleatorios entre 0 y 100


    // bubble sort
    ordenado = false;
    while (ordenado == false)   // Es la unica condicioon que se debe cumplir
    {
        ordenado = true; // presuponemos que está ordenado salvo que necesitemos hacer un intercambio de numeros
        for (i = 0; i <= (n - 2); i++) // siempre el Hasta en este caso debe ser 2 valores menos que el numero de elementos!
            if (arreglo[i] > arreglo[i+1])   // tengo que intercambiar los valores de i con i+1
            {
                auxiliar = arreglo[i];
                arreglo[i] = arreglo[i+1];
                arreglo[i+1] = auxiliar;
                ordenado = false; // indico que no estaba ordenado
            }
    }

    for ( int i = 0 ; i < n ; i++)
        cout << arreglo[i] << " ";

    return (0);
}
