#include "admin.h"

admin::admin() {
}

admin::admin(string pNombre, string pContra, string pCargo, int pNumero) {
	nombre = pNombre;
	contra = pContra;
	cargo = pCargo;
	numeroS = pNumero;
}

admin::~admin(){
}

string admin::getCargo() {
	return cargo;
}

int admin::getNumeroS() {
	return numeroS;
}

void admin::setCargo(string pCargo) {
	cargo = pCargo;
}

void admin::setNumeroS(int pNumero) {
	numeroS = pNumero;
}