// Definir una clase diaAnio. 
// Los atributos son mes y día 
// Los metodos son igual() y visualizar() 
// El mes se registra como un valor entero 1 - Enero.... 12 - Diciembre y el día en otra variable entera
// Se debe escribir un programa que que compruebe si su fecha es cumpleaños. 
class diaAnio // Declaramos la clase Calendario, las clases van en mayuscula y en simngular
{
    private: // Solo miembros de esta clase pueden acceder a los atributos, NINGUNA otra clase puede acceder
        int dia, mes;  // 
    
    public: // Cualquier otro miembro de otra clase puede acceder a estos metodos
         diaAnio(int _dia, int _mes) {  // Es similar a la definicion de una función. 
            dia = _dia;  
            mes = _mes;
        }

      
        void setDia (int valorDia);  //Metodo para establecer el día. valorDia es el nombre de la variable y debe concidir con el codigo implememtado en diaAnio.cpp
        void setMes(int valorMes); // Metodo para establecer el valor de Mes

        // metodos get: para obtener los valores de los atributos (Dia y Mes) de la fecha.
        int getDia(); // metodo para obtener el valor de Dia
        int getMes(); // metodo para obtener el valor de Mes

};

