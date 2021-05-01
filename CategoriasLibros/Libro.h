#pragma once
#include <string>
using namespace std;
class Libro
{
private:
	int codigo;
	string autor;
	string titulo;
	string editorial;
	string fechaLanzamiento;
	float precio;
	int cantidadInventario;
	string categoria;
public:
	Libro(int Pcodigo, string titulo,  string Pautor, string Peditorial, string PfechaLanzamiento, float Pprecio, int PcantidadInventario);
	Libro();

	bool deleted = true;
	bool agotado();
	void desplegar();

	int getCodigo();
	void setCodigo(int _codigo);


	string getCategoria();
	void setCategoria(string);

	string getAutor();
	void setAutor(string);

	string getTitulo();
	void setTitulo(string);

	string getEditorial();
	void setEditorial(string);

	string getfechaLanzamiento();
	void setfechaLanzamiento(string);

	float getPrecio();
	void setPrecio(float);

	int getCantidadInventario();
	void setCantidadInventario(int);
};

