#include "Nodo.h"							//se incluye nuestro header

Nodo::Nodo(std::string name) :_name(name) ,_first(NULL), _last(NULL), _next(NULL), _depth(0)						   // asignacion de caracteres 
{

}

Nodo::~Nodo()                              //destructor de nodo
{

}

void Nodo::addHijo(Nodo *hijo)              //agregamos hijos, en caso vacio, es padre
{
	hijo -> _depth = _depth + 1;
	if(_first == NULL) 			            //si esta vacia
	{ 
		_first = hijo; 						//nodeo padre, raiz
		_last = hijo;
	}else 									// si no esta vacia
	{
		_last -> _next = hijo; 				// se adjuntan los hijos a los respectivos padres
		_last = hijo;
	}
}

