#pragma once

#include <iostream>

using namespace std;

class Producto
{
	protected: string producto, descripcion;
			 int idmarca, precio_costo, precio_venta, existencia;

	protected:
		Producto() {
		}
		Producto(string produ, string descri, int idm, int precioc, int preciov, int exi) {
			producto = produ;
			descripcion = descri;
			idmarca = idm;
			precio_costo = precioc;
			precio_venta = preciov;
			existencia = exi;
	}

};

