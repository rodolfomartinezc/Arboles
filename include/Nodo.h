#ifndef NODO_H_
#define NODO_H_
#include <string>

class Nodo {							//clase Nodo

public:
	Nodo(std::string name);				// Se declara de esta forma para que sean cadenas en lugar de caracteres o enteros
	virtual ~Nodo();                   // destructore de nodo
	void addHijo(Nodo* hijo);          // agregar hijos a un nodo ya sea padre o no
private:
	std::string _name;					//referente a cadenas
	Nodo* _first;
	Nodo* _last;
	Nodo* _next;
	int _depth;							//profundidad del arbol
	friend class Arbol;
};

#endif
