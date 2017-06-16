#include "admin.h"

admin::admin() {
}

admin::admin(string pNombre, string pContra, string pCargo, int pNumero) {
	nombre = pNombre;
	contra = pContra;
	cargo = pCargo;
	numeroS = pNumero;
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

void admin::setContra(int pNumero) {
	numeroS = pNumero;
}