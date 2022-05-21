// Declaracion de clase Punto. En este codigo se declaran los constructores, los metodos para crear instancias de la clase
// Se definen los atributos que son sus caracteristicas de las instancias (color, edad , nombre)
//    y sus metodos que es lo que puede hacerse con las instancias de la clase ( cambar nombre, leer el color, cambiar la edad)
// Ademas se definen metodos para obtener las cooordenadas de la instancia (del punto) o modificar las mismas.
// A los atributos y a los métodos se los llama "Miembros de una clase" 
class Punto // Declaramos la clase Punto, las clases van en mayuscula y en simngular
{
    //Atributos: Las clases tienen atributos.
    // private y public son modificadores de acceso
    private: // Solo miembros de esta clase pueden acceder a los atributos, NINGUNA otra clase puede acceder
        int x,y;  // Las coordenadas del punto son sus atributos
    
    // Metodos: Las clases tienen métodos.
    public: // Cualquier otro miembro de otra clase puede acceder a estos metodos
        // Los metodos constructores se implementan en la misma clase, es para inicializar las instancias de la clase (puede haber mas de un metodo constructor) 
        // Metodo constructor con coordenadas para inicializar los atributos de mi instancia, este metodo le asigna las coordenadas 
        //    con datos del programa que va a crear una instancia de esta clase. 
        Punto(int _x, int _y) {  // Es similar a la definicion de una función. 
            x = _x;  // Atencion: los atributos se definen con _x e _y ! 
            y = _y;
        }

        // Metodo constructor origen, este metodo asigna a la instancia que se crea coordenadas (0,0) en el origen
        Punto() {  
            x = y = 0; 
        }
        
        // Los metodos set y get se definen en la misma clase que los constructores pero se imnplementan en otra clase.
        // metodos set: para establecer valores a los atributos (coordenadas) del punto.
        void setX (int valorX);  //ValorX es el nombre de la variable y debe concidir con el codigo implememtado en Punto.cpp
        void setY (int valorY); // Metodo para establecer el valor de y

        // metodos get: para obtener los valores de los atributos (coordenadas) del punto
        int getX(); // metodo para obtener el valor de X
        int getY(); // metodo para obtener el valor de Y

};

