// Ejercicio 3
// diseñe un algoritmo que elimine los espacios en blanco de un texto
#include<iostream>
using namespace std;

int main(void)
{ 
    string frase, fraseBlancos ;

    cout << "Ingrese la frase: ";
    getline(cin,frase);
    
    int i = 0;
    while ( i <= (int)frase.length()) {
        if (frase[i] != ' ') {
            fraseBlancos += frase[i];     
        }
        i++;
    }

    cout << fraseBlancos;
    
return(0);
}