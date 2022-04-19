#pragma once
#include "Producto.h"
#include <iostream>

using namespace std;

class marcas : public Producto {



	public:
	marcas() {
	}
	marcas(string produ, string descri, int idm, int precioc, int preciov, int exi) : Producto(produ, descri, idm, precioc, preciov, exi)


	void mostrar() {
		cout << "______________________" << endl;
		cout << produ << "," << descri << "," << idm << "," << precioc << "," << preciov << "," << exi << endl;

	}
};

