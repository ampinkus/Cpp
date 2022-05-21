// implementamos los metodos set y get para la clase Punto
#include "Punto.h" // podriamos incluir metodos de varias clases, en este caso solo para Punto. 

void Punto::setX(int valorX){  // Punto::setX indica que setX pertenece a la clase Punto,
                               //     esto lo hacemos porque en el mismo archivo podemos definir metodos que pertenezcan a distintas clases
    x = valorX;
} 

void Punto::setY(int valorY){  // Punto::setY indica que setY pertenece a la clase Punto.  
                                // Esto lo hacemos porque en el mismo archivo podemos definir metodos que pertenezcan a distintas clases
    y = valorY;
} 

int Punto::getX(){ // Metodo con el cual obtenemos el valor de x
    return x;
}

int Punto::getY(){ // Metodo con el cual obtenemos el valor de y
    return y;
}