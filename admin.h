#include <iostream>
#include <string>
#include "usuario.h"

using namespace std;

#ifndef ADMIN_H
#define ADMIN_H

class admin : public usuario {

	private:
		string cargo;
		int numeroS;

	public:
		admin();
		admin(string, string, string, int);
		string getCargo();
		int getNumeroS();
		void setCargo(string);
		void setNumeroS(int);
}

#endif;