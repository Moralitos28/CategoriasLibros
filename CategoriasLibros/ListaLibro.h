#pragma once
#include "NodoLibro.h"
#include <fstream> 
#include <fstream>
#include <vector>
#include <sstream>
class ListaLibro
{
private:
	NodoLibro* cabeza;
	int longitud;
public:

    ListaLibro(NodoLibro*);//Constructor
    ListaLibro();//Constructor
    NodoLibro* getMHead() const;//GetMHead
    void setMHead(NodoLibro*);//SetMHead
    void add_head(NodoLibro*, NodoLibro*, NodoLibro*);
    void add_ele(Libro*);

    int getLongitud();
    void setLongitud(int);

    void recorrerListaSimple();
    void recorrerLibrosxCategoria(string);
    void recorrerLibrosAgotados();
    void recorrerLibrosNoAgotados();
    void anadirPorcentaje(string, float);
    int recorrerExistencia0();
    void modificarLibro(int codigo, string autor, string editorial, string fechaLanzamiento, string titulo, float precio, int cantidadInventario);
    void modificarLibroStatus(int codigo, int inventario);
    bool getStatus(int codigo);
    int precioTotalLibros();


    void asociarCategoria(int codigo, string categoria);
    bool eliminarLibro(int libro);
    int buscarPosicionLibro(int libro);


};

