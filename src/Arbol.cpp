#include "Arbol.h"										//Se incluye nuestro header Arbol y nuestras librerias standar
#include <iostream>
#include <string>

using namespace std;


std::string num;									// variables de apoyo en
int j=1;											// Busqueda e Impresion
int k=1;											// num es declarada como 
int M=1;											// cadena de caracteres 
													// para comparación

Arbol::~Arbol() {   							    // Destructor de Arbol
}

Arbol::Arbol(Nodo *raiz) : _raiz(raiz)				//Asignacion de Raiz(Padre)
{
}

void Arbol::ImpresionyBusqueda(Nodo *nodo)         //Funcion de impresion y busqueda en nodos
{
while(j==1){
    cout<<"Ingrese un numero a buscar en el arbol: "; // Se ingresa un valor
    cin>>num;
	j++;
}
		
for(int i = 0 ; i < nodo -> _depth ; i++)         // Se explora en profundidad segun los hijos y subhijos, etc...
	{
		cout << "\t";
	}
	cout << nodo -> _name << endl;
	Nodo* i = nodo -> _first;

if(num == nodo->_name ){     // si el elemento es encontrado, se notifica

cout << "\n El Elemento si se encuentra en el arbol \n";

}

else{
while(M==1){				//caso contrario, se notifica que no se encontro
cout << "\n El Elemento no se encuentra en el arbol \n";
M++;
}
}

	while(i != NULL)
	{
		ImpresionyBusqueda(i);    // recursividad en impresion y busqueda
		i = i -> _next;
	}

}

void Arbol::ImpresionyBusqueda()   // Impresion y busqueda referida a raiz (Padre)
{
	ImpresionyBusqueda(_raiz);
}


