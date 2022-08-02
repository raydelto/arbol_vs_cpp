
#include <iostream>
#include "Arbol.h"

int main()
{
    Nodo* raiz = new Nodo("\\");
    Nodo* documentos = new Nodo("Documentos");
    Nodo* musica = new Nodo("Musica");
    Nodo* merengue = new Nodo("Merengue");
    Nodo* bachata = new Nodo("Bachata");

    raiz->AgregarHijo(documentos);
    raiz->AgregarHijo(musica);
    musica->AgregarHijo(merengue);
    musica->AgregarHijo(bachata);

    Arbol arbol(raiz);

    arbol.Recorrer();

    delete bachata;
    delete merengue;
    delete musica;
    delete documentos;
    delete raiz;

    return 0;
}
