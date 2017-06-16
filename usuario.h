#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H

class usuario {

	protected:
		string nombre;
		string contra;

	public:
		usuario();
		usuario(string, string);
		virtual ~usuario();
		string getNombre();
		string getContra();
		void setNombre(string);
		void setContra(string);
};

#endif