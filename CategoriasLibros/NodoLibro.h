#pragma once
#include "Libro.h"
class NodoLibro
{
private:
	NodoLibro* antLibro;
	NodoLibro* sgtLibro;
	NodoLibro* cabeza;
	Libro libro;
public:
	NodoLibro(Libro pLibro);
	NodoLibro* getSiguiente();
	NodoLibro* getAnterior();
	Libro* getLibro();



};

