#include <iostream>
#include <string>
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
		string getTipoM();
		void setTipoM(string);
}

#endif;