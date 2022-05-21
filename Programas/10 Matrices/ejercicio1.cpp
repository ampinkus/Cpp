// Ejercicio 1:
//  Hacer un programa que llene una matriz de 3 * 4

#include<iostream>
using namespace std;

int main(void) {
    int arreglo[3][4];

    for (int i = 0; i <= 2; i++   ) // filas
        for (int j = 0; j <= 3; j++  ) {  // columnas
            arreglo[i][j] = 3*(i + j + 1); 
            cout <<"arreglo[" << i << "]" << "[" << j  << "]: "  << arreglo[i][j] <<"   "; 
        }
    cout << endl;

     for (int i = 0; i <= 2; i++   ) // filas
        for (int j = 0; j <= 3; j++  )  // columnas
            if (!(arreglo[i][j] % 2))
                cout <<"arreglo[" << i << "]" << "[" << j  << "]: "  << arreglo[i][j] <<"   ";    

    return 0;
}