#include "ListaCategorias.h"
#include <iostream>

ListaCategorias::ListaCategorias() {}

ListaCategorias::ListaCategorias(NodoCategoria* cabeza)
{
    setMHead(cabeza);
}

NodoCategoria* ListaCategorias::getMHead() const {
    return cabeza;
}
void ListaCategorias::setMHead(NodoCategoria* cabeza) {
    ListaCategorias::cabeza = cabeza;
}

int ListaCategorias::getLongitud() {
    return longitud;
}
void ListaCategorias::setLongitud(int longitud) {
    ListaCategorias::longitud = longitud;
}

void ListaCategorias::add_head(NodoCategoria* aux1, NodoCategoria* new_node, NodoCategoria* aux2) {
    if (aux1 == getMHead()) {
        setMHead(new_node);
    }
    else {
        aux2->setSiguiente(new_node);
    }
}

void ListaCategorias::add_ele(Categoria* libro)
{
    NodoCategoria* new_node = new NodoCategoria(libro);//Crea el NodoRecord

    NodoCategoria* aux1 = this->getMHead();
    NodoCategoria* aux2 = nullptr;//En aux2 == aux1.siguiente
    //Para insertar al medio o al final
    while ((aux1 != nullptr) && (aux1->getCategoria()->getDescrip() > libro->getDescrip())) {//Verifica si la lista está vacía
        aux2 = aux1;
        aux1 = aux1->getSiguiente();
    }
    //Para insertar al inicio
    add_head(aux1, new_node, aux2);
    new_node->setSiguiente(aux1);
    setLongitud(getLongitud() + 1);
}



void ListaCategorias::recorrerListaSimple() {
    if (getMHead() == NULL) {
        std::cout << "Lista vacia" << "\n";
    }
    else {
        NodoCategoria* aux = getMHead();
        int contador = 1;
        do {
            std::cout << "Categoria #" + to_string(contador) + "\n Nombre: " + aux->getCategoria()->getNombre() + 
                "\n Descripción: " + aux->getCategoria()->getDescrip() << "\n";
            aux = aux->getSiguiente();
            contador++;
        } while (aux != NULL);
    }
}

void ListaCategorias::modificarCategoria(string nombre, string descrip) {
    if (getMHead() == NULL) {
        std::cout << "Lista vacia" << "\n";
    }
    else {
        NodoCategoria* aux = getMHead();
        do {
            if (nombre == aux->getCategoria()->getNombre())
            {
                aux->getCategoria()->setDescrip(descrip);
            }
            aux = aux->getSiguiente();
        } while (aux != NULL);
    }
}

bool ListaCategorias::eliminarLibro(int idLibro, string nombreCategoria)
{
    NodoCategoria* cabeza = this->getMHead();
    
    for (int i = 0; i < this->longitud; i++) {
        if (cabeza->getCategoria()->getNombre() == nombreCategoria) {
            cabeza->eliminarNodo(idLibro);
            return true;
        }
        cabeza = cabeza->getSiguiente();
    }
    return false;
}

void ListaCategorias::eliminarCategoria(string categoria)
{
    
    NodoCategoria* aux = this->getMHead(), *ant =  this->getMHead();
    for (int i = 0; i < this->getLongitud(); i++) {
        if (aux->getCategoria()->getNombre() == categoria) {
            if (cabeza == aux) {
                cabeza = aux->getSiguiente();
            }
            else {
                ant->setSiguiente(aux->getSiguiente());
            }
            aux->eliminarNodos();
            delete(aux);
            this->setLongitud(getLongitud() - 1);
            return;
        }
        ant = aux;
        aux = aux->getSiguiente();

    }



}

int ListaCategorias::buscarPosicionLibro(string nombre) {
    NodoCategoria* aux;
    int pos;
    for (aux = getMHead(), pos = 1; aux != NULL; aux = aux->getSiguiente(), pos++) {
        if (aux->getCategoria()->getNombre() == nombre) {
            return pos;
        }
    }
    if (aux == 0) {
        pos = -1;
    }
    return pos;
}

void ListaCategorias::asociarCategoria(Libro* libro, string nombreCategoria)
{

    NodoCategoria* cabeza = this->getMHead();

    for (int i = 0; i < this->longitud; i++) {
        if (cabeza->getCategoria()->getNombre() == nombreCategoria) {
            
            cabeza->agregarLibro(libro);

            return;
        }
        cabeza = cabeza->getSiguiente();
    }
    return;
}

void ListaCategorias::RecorrerListaXCategoria(string nombreCategoria)
{
    NodoCategoria* cabeza = this->getMHead();

    for (int i = 0; i < this->longitud; i++) {
        if (cabeza->getCategoria()->getNombre() == nombreCategoria) {
            cabeza->ImprimirLibros();
            return;
        }
        cabeza = cabeza->getSiguiente();
    }
    return;
}
