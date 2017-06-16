#include <iostream>
#include <string>

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
		string getUsuario();
		string getContra();
		void setUsuario(string);
		void setContra(string);
}

#endif;