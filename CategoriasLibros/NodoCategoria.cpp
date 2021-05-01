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
