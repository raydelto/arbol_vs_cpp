#pragma once

#include <string>

class Nodo
{
public:
	Nodo(std::string descripcion);
	void AgregarHijo(Nodo* nodo);
	std::string GetDescripcion();
	Nodo* GetPrimerHijo();
	Nodo* GetSiguiente();

private:
	Nodo* _siguiente;
	Nodo* _primerHijo;
	Nodo* _ultimoHijo;
	std::string _descripcion;

};


