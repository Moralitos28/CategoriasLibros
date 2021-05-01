#pragma once
#include "Libro.h"
class NodoLibro
{
private:
	Libro* libro;
	NodoLibro* sgtLibro;
public:
	NodoLibro(Libro* pLibro);
	NodoLibro();

	NodoLibro* getSiguiente();
	void setSiguiente(NodoLibro* sig);
	Libro* getLibro();
	void setLibro(Libro* libro);

};

