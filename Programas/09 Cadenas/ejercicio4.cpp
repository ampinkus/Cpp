// Ejercicio 4
// diseñe un algoritmo que diga si una frase es un palindromo ( dabale arroz a la zorra el abad) 
// no tome en cuenta los blancos

#include<iostream>
using namespace std;

int main(void)
{ 
    string frase, fraseBlancos;
    bool palindromo = true; // si es verdad es palindromo
    int j = 0; // indice auxiliar

    cout << "Ingrese la frase: ";
    getline(cin,frase);
    j = (int)frase.length(); // guardo en j la longitud de la frase antes de sacar los blancos

    // primero debo eliminar los blancos de la frase ingresada
    int i = 0;
    while ( i <= j ) {
        if (frase[i] != ' ') {
            fraseBlancos += frase[i];     
        }
        i++;
    } 
    
    j = (int)fraseBlancos.length() - 2; // guardo en j la longitud de la frase despues de sacar los blancos, 
    // resto dos porque se le agrega un simbolo y la cadena comienza en 0 en vez de 1 
    i = 0;
    while ( i <= j ) {
        if (fraseBlancos[i] != fraseBlancos[j - i]) {  // comparo la fraseBlancos consigo mismo al reves 
            palindromo = false;   // digo que no es un palindromo
            i = j;  // para salir del lazo while   
        }
        i++;
    }

    if(palindromo)
        cout << "Es un palindromo";
     else
        cout << "No es un palindromo";

return(0);
}