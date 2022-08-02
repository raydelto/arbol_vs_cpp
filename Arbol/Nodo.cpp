#include "Nodo.h"


Nodo::Nodo(std::string descripcion):_siguiente(nullptr), _primerHijo(nullptr), _ultimoHijo(nullptr), _descripcion(descripcion)
{
}

void Nodo::AgregarHijo(Nodo* nodo)
{
	if (_primerHijo == nullptr) //La lista está vacía
	{
		_primerHijo = nodo;
		_ultimoHijo = nodo;
	}
	else //Si la lista no está vacía
	{
		_ultimoHijo->_siguiente = nodo;
		_ultimoHijo = nodo;
	}
}

std::string Nodo::GetDescripcion()
{
	return _descripcion;
}

Nodo* Nodo::GetPrimerHijo()
{
	return _primerHijo;
}

Nodo* Nodo::GetSiguiente()
{
	return _siguiente;
}