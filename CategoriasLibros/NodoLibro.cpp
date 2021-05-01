#include "NodoLibro.h";

NodoLibro::NodoLibro(Libro* pLibro)
{
	setLibro(pLibro);
}

NodoLibro::NodoLibro()
{
	setSiguiente(NULL);
}

NodoLibro* NodoLibro::getSiguiente()
{
	if (sgtLibro != nullptr && sgtLibro->getLibro() == nullptr) {
		NodoLibro* aux = sgtLibro;
		if (sgtLibro->getSiguiente() == nullptr) {
			delete sgtLibro;
			return NULL;
		}
		NodoLibro* sig = sgtLibro->getSiguiente();
		delete sgtLibro;
		setSiguiente(sig);
	}
	return sgtLibro;
}

void NodoLibro::setSiguiente(NodoLibro* sig) {
	NodoLibro::sgtLibro = sig;
}

Libro* NodoLibro::getLibro() {

		if (this->libro == nullptr) {
			return NULL;
		}
		if (this->libro->deleted) {
			return NULL;
		}
		return libro;

}

void NodoLibro::setLibro(Libro* libro) {
	NodoLibro::libro = libro;
}
