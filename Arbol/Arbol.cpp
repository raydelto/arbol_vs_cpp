#include "Arbol.h"
#include <iostream>


Arbol::Arbol(Nodo* raiz): _raiz(raiz)
{
}

void Arbol::Recorrer(Nodo* nodo)
{
	std::cout << nodo->GetDescripcion() << std::endl;

	Nodo* i = nodo->GetPrimerHijo();

	while (i != nullptr)
	{
		Recorrer(i);
		i = i->GetSiguiente();
	}

}

void Arbol::Recorrer()
{
	if (_raiz == nullptr)
	{
		std::cout << "No se puede recorrer un arbol vacío" << std::endl;
		exit(0);
	}
	Recorrer(_raiz);
}
