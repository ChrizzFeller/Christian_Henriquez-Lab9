#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#ifndef VEHICULO_H
#define VEHICULO_H

class vehiculo {

	private:
		bool alquilado;
		string placa;
		string marca;
		string modelo;
		string ano;
		double precio;

	public:
		vehiculo();
		vehiculo(string, string, string, string, double);
		~vehiculo();
		string getPlaca();
		string getMarca();
		string getModelo();
		string getAno();
		double getPrecio();
		bool getAlquilado();
		void setAlquilado(bool);
		void setPlaca(string);
		void setMarca(string);
		void setModelo(string);
		void setAno(string);
		void setPrecio(double);

		friend ostream& operator <<(ostream &escribir,vehiculo &r){
			string resp;
			stringstream text;
			text << r.getPlaca();
			text << r.getMarca();
			text << r.getModelo();
			text << r.getAno();
			text << r.getPrecio();
            resp = text.str();
            return escribir<<resp;
        }
};

#endif