#include "NodoCategoria.h"

NodoCategoria::NodoCategoria(Categoria* categoria)
{
	setCategoria(categoria);
	this->listaInternaLibros = new ListaLibro();
}

NodoCategoria::NodoCategoria()
{
	setSiguiente(NULL);
	this->listaInternaLibros = new ListaLibro();

}

NodoCategoria* NodoCategoria::getSiguiente() const
{
	return sgtLibro;
}

void NodoCategoria::setSiguiente(NodoCategoria* sig) {
	NodoCategoria::sgtLibro = sig;
}

Categoria* NodoCategoria::getCategoria() const {
	return categoria;
}
void NodoCategoria::setCategoria(Categoria* categoria) {
	NodoCategoria::categoria = categoria;
}

void NodoCategoria::eliminarLibro(int id)
{
	listaInternaLibros->eliminarLibro(id);
}

void NodoCategoria::agregarLibro(Libro* libro)
{
	listaInternaLibros->add_ele(libro);
}

void NodoCategoria::eliminarNodo(int idLibro)
{
	listaInternaLibros->eliminarNodo(idLibro);
}

void NodoCategoria::eliminarNodos()
{
	this->listaInternaLibros->eliminarNodos();
}

void NodoCategoria::ImprimirLibros()
{
	this->listaInternaLibros->recorrerListaSimpleAlveris();
}
