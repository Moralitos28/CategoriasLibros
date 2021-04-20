#pragma once
#include <string>
using namespace std;
class Libro
{
private:
	string codigo;
	string autor;
	string titulo;
	string editorial;
	int fechaLanzamiento;
	float precio;
	int cantidadInventario;
public:
	Libro(string Pcodigo, string Pautor, string Peditorial, int PfechaLanzamiento,  float Pprecio, int PcantidadInventario);
	Libro();
	bool agotado();
	void desplegar();
};

