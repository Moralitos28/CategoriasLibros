#include "Libro.h"

//TODO : GENERATE CUSTO CONTRUCT TO LIBRO.
Libro::Libro(int Pcodigo,string Ptitulo, string Pautor, string Peditorial, string PfechaLanzamiento, float Pprecio, int PcantidadInventario)
{
	setTitulo(Ptitulo);
	setAutor(Pautor);
	setCodigo(Pcodigo);
	setEditorial(Peditorial);
	setfechaLanzamiento(PfechaLanzamiento);
	setPrecio(Pprecio);
	setCantidadInventario(PcantidadInventario);
}

Libro::Libro()
{
}

string Libro::getAutor() { return this->autor; }
void Libro::setAutor(string _autor) { this->autor = _autor; }

int Libro::getCodigo() { return this->codigo; }
void Libro::setCodigo(int _codigo) { this->codigo = _codigo; }

string Libro::getCategoria() { return this->categoria; }
void Libro::setCategoria(string categoria) { this->categoria = categoria; }

string Libro::getEditorial() { return this->editorial; }
void Libro::setEditorial(string _editorial) { this->editorial = _editorial; }

int Libro::getCantidadInventario() { return this->cantidadInventario; }
void Libro::setCantidadInventario(int _cantidad) { this->cantidadInventario = _cantidad; }

string Libro::getfechaLanzamiento() { return this->fechaLanzamiento; }
void Libro::setfechaLanzamiento(string _fecha) { this->fechaLanzamiento = _fecha; }

float Libro::getPrecio() { return this->precio; }
void Libro::setPrecio(float _precio) { this->precio = _precio; }

string Libro::getTitulo() { return this->titulo; }
void Libro::setTitulo(string _titulo) { this->titulo = _titulo; }

bool Libro::agotado()
{
	if (getCantidadInventario() <= 0) {
		return true;
	}
	else {
		return false;
	}
}

void Libro::desplegar()
{
}
