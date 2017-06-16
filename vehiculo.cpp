#include "vehiculo.h"

vehiculo::vehiculo() {
}

vehiculo::vehiculo(string pPlaca, string pMarca, string pModelo, string pAno, double pPrecio) {
	placa = pPlaca;
	marca = pMarca;
	modelo = pModelo;
	ano = pAno;
	precio = pPrecio;
}

string vehiculo::getPlaca() {
	return placa;
}

string vehiculo::getMarca() {
	return marca;
}

string vehiculo::getModelo() {
	return modelo;
}

string vehiculo::getAno() {
	return ano;
}

double vehiculo::getPrecio() {
	return precio;
}

void vehiculo::setPlaca(string pPlaca){
	placa = pPlaca;
}

void vehiculo::setMarca(string pMarca){
	marca = pMarca;
}

void vehiculo::setModelo(string pModelo){
	modelo = pModelo;
}

void vehiculo::setAno(string pAno){
	ano = pAno;
}

void vehiculo::setPrecio(double pPrecio) {
	precio = pPrecio;
}