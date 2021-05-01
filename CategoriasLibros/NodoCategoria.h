#pragma once
#include "Categoria.h"
#include "ListaLibro.h"
class NodoCategoria
{
private:
	Categoria* categoria;
	NodoCategoria* sgtLibro;
	ListaLibro* listaInternaLibros;
public:
	NodoCategoria(Categoria*);
	NodoCategoria();

	NodoCategoria* getSiguiente() const;
	void setSiguiente(NodoCategoria*);
	Categoria* getCategoria() const;
	void setCategoria(Categoria*);



};