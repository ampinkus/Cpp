// implementamos los metodos set y get para la clase diaAnio
#include "diaAnio.h" 

void diaAnio::setDia(int valorDia){ 
                               
    dia = valorDia;
} 

void diaAnio::setMes(int valorMes){  // diaAnio::setY indica que setMes pertenece a la clase Punto.  
                                    // Esto lo hacemos porque en el mismo archivo podemos definir metodos que pertenezcan a distintas clases
    mes = valorMes;
} 

int diaAnio::getDia(){ // Metodo con el cual obtenemos el valor del dia
    return dia;
}

int diaAnio::getMes(){ // Metodo con el cual obtenemos el valor del mes
    return mes;
}