// cadenas
// practica de cadenas de caracteres

#include<iostream>
#include <string>
using namespace std;

int main(void)
{
    int longitud;
    string frase = "Hola Mundo";
    string frase2;
    string frase3 = "Hola ";
    string frase4 = "Mundo!";

     // longitud de cadenas
    longitud = (int)frase.length(); // cast a int para que no proteste el compilador
    cout << "La longitud de frase es: " << longitud << endl;

    // subcadenas
    frase2 = frase.substr(0,4);
    cout << "La frase2 es : " << frase2 << endl;
    
    // unir cadenas
    cout << frase3 + frase4 << endl;

    return 0;
}