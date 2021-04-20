#pragma once
#include "NodoLibro.h"
/// <summary>
/// Lista doble de libro.
/// Contiene tipos de nodo que a su vez tienen libros.
/// </summary>
class ListaLibro
{
private:
	NodoLibro* nodoCabeza;
	NodoLibro* nodoFinal;
	int longitud = 0;
public:

	ListaLibro();

	/// <summary>
	/// Pone un nodo al final de la lista
	/// </summary>
	/// <param name="nodoNuevo"></param>
	void AgregarNodo(NodoLibro* nodoNuevo);

	/// <summary>
	/// Muestra todos los libros en la lista
	/// </summary>
	void MostrarTodos();

	/// <summary>
	/// Muestra si la lista esta vacia.
	/// </summary>
	/// <returns></returns>
	bool EsVacia();

	/// <summary>
	/// Mostrar cuantos elementos hay en la lista.
	/// </summary>
	/// <returns></returns>
	int GetLargo();

	/// <summary>
	/// Borrar un nodo de la lista.
	/// </summary>
	/// <param name="nodoParaBorrar"></param>
	void BorrarNodo(NodoLibro* nodoParaBorrar);

};

