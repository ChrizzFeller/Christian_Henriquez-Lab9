#include <iostream>
#include <string>

using namespace std;

#ifndef VEHICULO_H
#define VEHICULO_H

class vehiculo {

	private:
		string placa;
		string marca;
		string modelo;
		string ano;
		double precio;

	public:
		vehiculo();
		vehiculo(string, string, string, string, double);
		string getPlaca();
		string getMarca();
		string getModelo();
		string getAno();
		double getPrecio();
		void setPlaca(string);
		void setMarca(string);
		void setModelo(string);
		void setAno(double);
}

#endif;