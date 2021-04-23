// CategoriasLibros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "libro.h"

Libro* l = new Libro();

void registro() {

}


void procesarOpcion(int op) {	switch (op)	{	case 1:		registro();		break;	case 2:		l->desplegar();		break;	default:
		break;

	}
}
		void menu() {
			string texto;
			int op;
			texto += "1. Registrar libro\n";
			texto += "2. Listar libros\n";
			texto += "0. Salir\n";
			cout << "Seleccione la opcion de desea realizar\n" << endl;
			cout << texto << endl;
			cin >> op;
			procesarOpcion(op);
		}
		


int main(){
	//jhbgctfc
	//jvjgvh
	menu();
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
