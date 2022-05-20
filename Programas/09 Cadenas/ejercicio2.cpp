// Ejercicio 2
// calcular la longitud de dos cadenas de caracteres e imprimir la mayor
#include<iostream>
using namespace std;

int main(void)
{ 
 string frase1, frase2 ;

    cout << "Ingrese la primer frase: ";
    getline(cin,frase1);
    cout << "Ingrese la segunda frase: ";
    getline(cin,frase2);
    cout << endl;

    if (frase1.length() > frase2.length()) {
        cout << "La primera frase es mas larga: " << frase1 << endl;}
    else{
        cout << "La segunda frase es mas larga: " << frase2 << endl;}

return(0);
}