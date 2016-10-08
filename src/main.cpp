#include "Arbol.h" //se incluyen nuestros headers y librerias estandar
#include <iostream>

using namespace std; //espacio de trabajo standar

int main()  //main,cuyos parametros hacen la base para la creacion del ejecutable

{
    cout<<"\n                 -ARBOLES-              \n";          // Metodo a Evaluar
	cout<<"      Rodolfo Martinez y Brenda Ortega    \n\n";   // Integrantes del Equipo

//Se definen nuestros nodos, libres sin conecion entre ellos
//OJO sus argumentos no son caracteres, si no cadenas de caracteres,
//esto para que la busqueda sea mas dinamica y tambien para que no 
//este limitado a enteros o caracteres
	
	Nodo* Padre  = new Nodo("1");
	Nodo* Ahijo1 = new Nodo("2");
	Nodo* Ahijo2 = new Nodo("3");
	Nodo* Bhijo1 = new Nodo("4");
	Nodo* Bhijo2 = new Nodo("5");
	Nodo* Bhijo3 = new Nodo("6");
	Nodo* Bhijo4 = new Nodo("7");
	Nodo* Bhijo5 = new Nodo("10");
	Nodo* Chijo1 = new Nodo("9");
	Nodo* Chijo2 = new Nodo("8");

// A partir de este punto se3 asignan coneciones entre los nodos, siendo
//nuesto nodo raiz Padre y la primera generación los nodos A 	

	Padre->addHijo(Ahijo1);
	Padre->addHijo(Ahijo2);

// Se añade la segunda generación de nodos B a sus respectivos nodos

	Ahijo1->addHijo(Bhijo1);
	Ahijo1->addHijo(Bhijo2);
	Ahijo2->addHijo(Bhijo3);
	
	Ahijo2->addHijo(Bhijo4);
	Ahijo2->addHijo(Bhijo5);

// Finalemnte la tercera generacion de nodos C

	Bhijo2->addHijo(Chijo1);
	Bhijo2->addHijo(Chijo2);

// Se crea el arbol con raiz Padre (valor 1)

	Arbol* arbol = new Arbol(Padre);

// Se emplementa las funciones y metodos respectivas para la busqueda e impresion del arbol

//se anexa imagen del arbol en jerarquia de izquierda a derecha 
	arbol -> ImpresionyBusqueda();
}

