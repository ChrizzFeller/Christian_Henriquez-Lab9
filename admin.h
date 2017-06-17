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
		~admin();
		string getCargo();
		int getNumeroS();
		void setCargo(string);
		void setNumeroS(int);

		friend ostream& operator <<(ostream &escribir,admin &r){
			string resp;
			stringstream text;
			text << r.getNombre();
			text << r.getContra();
			text << r.getCargo();
			text << r.getNumeroS();
            resp = text.str();
            return escribir<<resp;
        }
};

#endif