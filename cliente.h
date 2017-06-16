#include <iostream>
#include <string>
#include <sstream>
#include "usuario.h"

using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

class cliente : public usuario {

	private:
		string tipoM;

	public:
		cliente();
		cliente(string, string, string);
		~cliente();
		string getTipoM();
		void setTipoM(string);

		friend ostream& operator <<(ostream &escribir,cliente &r){
			string resp;
			stringstream text;
			text << r.getNombre();
			text << ",";
			text << r.getContra();
			text << ",";
			text << r.getTipoM();
            resp = text.str();
            return escribir<<text;
        }
};

#endif