#include "usuario.h"

usuario::usuario() {
}

usuario::usuario(string pNombre, string pContra) {
	nombre = pNombre;
	contra = pContra;
}

usuario::~usuario(){
}

string usuario::getContra() {
	return contra;
}

string usuario::getNombre() {
	return nombre;
}

void usuario::setNombre(string pNombre) {
	nombre = pNombre;
}

void usuario::setContra(string pContra) {
	contra = pContra;
}