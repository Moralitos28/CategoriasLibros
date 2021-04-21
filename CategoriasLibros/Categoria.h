#pragma once
#include <stdlib.h>
#include <iostream>
using namespace std;


class Categoria
{

private:
	string codigo;
	string descripcion;
public:
	Categoria(string Pcodigo, string Pdescripcion);
	Categoria();
	void desplegar();
};

