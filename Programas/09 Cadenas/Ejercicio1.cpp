// Ejercicio 1
// Hacer una programa que cuente las vocales de un texto ingresado por el usuario

#include<iostream>
using namespace std;

int main(void)
{
    string frase, letra ;
    int a = 0; // los contadores de vocales
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

    cout << "Ingrese una frase: ";
    getline(cin,frase);

    for ( int ind = 0; ind < (int)frase.length(); ind++ ) {   // recorro la frase
            switch (frase[ind]) { // la cadena es como un vector donde encuentro los caracteres con el indice
            case 'a': // comparo cada caracter con una vocal
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            default:
                break;
            }
        }

    cout << "La cantidad de vocales a es: " << a << endl;
    cout << "La cantidad de vocales e es: " << e << endl;
    cout << "La cantidad de vocales i es: " << i << endl;
    cout << "La cantidad de vocales o es: " << o << endl;    
    cout << "La cantidad de vocales u es: " << u << endl;        
        
    return 0;
}