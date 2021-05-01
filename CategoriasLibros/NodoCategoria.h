#pragma once
#include "Categoria.h"
#include "ListaLibro.h"
class NodoCategoria
{
private:
	Categoria* categoria;
	NodoCategoria* sgtLibro;
	NodoCategoria* antLibro;
	ListaLibro* listaInternaLibros;
public:
	NodoCategoria(Categoria*);
	NodoCategoria();

	NodoCategoria* getSiguiente() const;
	void setSiguiente(NodoCategoria*);
	Categoria* getCategoria() const;
	void setCategoria(Categoria*);

	void eliminarLibro(int id);
	void agregarLibro(Libro* libro);
	
	//Eliminar nodo por libro.
	void eliminarNodo(int idLibro);
	void eliminarNodos();
	void ImprimirLibros();
};