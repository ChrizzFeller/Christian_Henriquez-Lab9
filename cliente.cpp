#include "cliente.h"

cliente::cliente() {
}

cliente::cliente(string pNombre, string pContra, string pTipo) {
	nombre = pNombre;
	contra = pContra;
	tipoM = pTipo;
}

cliente::~cliente() {
}

string cliente::getTipoM() {
	return tipoM;
}

void cliente::setTipoM(string pTipo) {
	tipoM = pTipo;
}