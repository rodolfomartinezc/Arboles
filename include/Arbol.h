#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"

class Arbol {                               // Clase Arbol

public:
	Arbol(Nodo* raiz);                      // Nodo apuntador a raiz
	virtual ~Arbol();                       // Destructor de Arbol
	void ImpresionyBusqueda();              // Funcion para impresion de arbol (Raiz)(Padre)
	void ImpresionyBusqueda(Nodo* nodo);    // Funcion para impresion de arbol(ramas e hijos)(Hijos)

private:
	Nodo* _raiz;
};

#endif 
