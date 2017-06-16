#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "usuario.h"
#include "cliente.h"
#include "admin.h"
#include "vehiculo.h"

using namespace std;

string randomS();

int main() {
	ofstream clientes;
	ofstream admins;
	ofstream carros;
	carros.open("carros.txt",ios::app);
	admins.open("admins.txt",ios::app);
	clientes.open("clientes.txt",ios::app);
	srand(time(NULL));
	vector<cliente*> lista0;
	vector<admin*> lista1;
	vector<vehiculo*> lista2;
	bool seguir = true;
	while (seguir == true) {
		bool user = false, pass = false, enter = false, enter2 = false;
		int userM;
		cout << "Como desea entrar?" << endl;
		cout << "1) Admin" << endl;
		cout << "2) Cliente " << endl;
		int resp9;
		cin >> resp9;
		while (resp9 < 1 || resp9 > 2) {
			cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
			cin >> resp9;
		}
		while (enter == false) {
			cout << "Ingrese el nombre de usuario: " << endl;
			string nombre1;
			cin >> nombre1;
			cout << "Ingrese la contraseña: " << endl;
			string contra1;
			cin >> contra1;
			if (resp9 == 1)
			{
				for (int i = 0; i < lista0.size(); ++i)
				{
					if (lista0.at(i) -> getNombre() == nombre1)
					{
						user = true;
					}

					if (lista0.at(i) -> getContra() == contra1) 
					{
						pass = true;
					}

					if (user == true && pass == true)
					{
						userM = i;
						enter = true;
						enter2 = true;
					} else {
						user = false;
						pass = false;
					}
				}
				if (enter == false)
				{
					cout << "Desea salir?" << endl;
					cout << "1) Salir" << endl;
					cout << "2) Seguir tratando" << endl;
					int resp0;
					cin >> resp0;

					if (resp0 == 1)
					{
						enter = true;
					} else {
						enter = false;
					}
				}
			} else {
				for (int i = 0; i < lista1.size(); ++i)
				{
					if (lista1.at(i) -> getNombre() == nombre1)
					{
						user = true;
					}

					if (lista1.at(i) -> getContra() == contra1) 
					{
						pass = true;
					}

					if (user == true && pass == true)
					{
						userM = i;
						enter = true;
						enter2 = true;
					} else {
						user = false;
						pass = false;
					}
				}
				if (enter == false)
				{
					cout << "Desea salir?" << endl;
					cout << "1) Salir" << endl;
					cout << "2) Seguir tratando" << endl;
					int resp0;
					cin >> resp0;

					if (resp0 == 1)
					{
						enter = true;
					} else {
						enter = false;
					}
				}
			}
		}

		if (enter2 == true)
		{
			bool seguir2 = true;
			while(seguir2 == true) {
				if (resp9 == 1)
				{
					cliente* temp1 = dynamic_cast<cliente*>(lista0.at(userM));
					cout << "Que desea hacer?" << endl;
					cout << "1) Listar autos" << endl;
					cout << "2) Alquilar autos" << endl;
					cout << "3) Guardar factura" << endl;
					int resp2;
					cin >> resp2;
					while (resp2 < 1 || resp2 > 3) {
						cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
						cin >> resp2;
					}
					if (resp2 == 1)
					{
						for (int i = 0; i < lista2.size(); ++i)
						{
							cout << "Carro #" << (i+1) << endl;
							cout << "Placa: " << lista2.at(i) -> getPlaca() << endl;
							cout << "Marca: " << lista2.at(i) -> getMarca() << endl;
							cout << "Modelo: " << lista2.at(i) -> getModelo() << endl;
							cout << "Año: " << lista2.at(i) -> getAno() << endl;
							cout << "Precio: " << lista2.at(i) -> getPrecio() << endl;
							if (lista2.at(i) -> getAlquilado() == true)
							{
								cout << "Alquilado?: Si" << endl;
							} else {
								cout << "Alquilado?: No" << endl;
							}
							cout << endl;
						}
					} else if (resp2 == 2)
					{
						cout << "Cual vehiculo desea alquilar?" << endl;
						for (int i = 0; i < lista2.size(); ++i)
						{
							if (lista2.at(i) -> getAlquilado() == false)
							{
								cout << "Carro #" << (i) << endl;
								cout << "Placa: " << lista2.at(i) -> getPlaca() << endl;
								cout << "Marca: " << lista2.at(i) -> getMarca() << endl;
								cout << "Modelo: " << lista2.at(i) -> getModelo() << endl;
								cout << "Año: " << lista2.at(i) -> getAno() << endl;
								cout << "Precio: " << lista2.at(i) -> getPrecio() << endl;
								cout << endl;
							}
						}
						cout << "Ingrese 99 para cancelar." << endl;
						int resp1;
						cin >> resp1;
						if (resp1 == 99)
						{
						} else {
							bool YAlquilado = false;
							if (lista2.at(resp1) -> getAlquilado() == true)
							{
								YAlquilado = true;
							}
							while (resp1 < 0 || resp1 > lista2.size() || YAlquilado == true) {
								cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
								cin >> resp1;
								YAlquilado = false;
								if (lista2.at(resp1) -> getAlquilado() == true)
								{
									YAlquilado = true;
								}
							}
							bool pAlquilado = true;
							lista2.at(resp1) -> setAlquilado(pAlquilado);
						}
					} else {

					}
				} else if (resp9 == 2)
				{
					
					admin* temp2 = dynamic_cast<admin*>(lista1.at(userM));
					cout << "Que desea hacer?" << endl;
					cout << "1) Agregar Vehiculo" << endl;
					cout << "2) Modificar Vehiculo" << endl;
					cout << "3) Eliminar Vehiculo" << endl;
					cout << "4) Listar Vehiculos" << endl;
					cout << "5) Agregar Usuario" << endl;
					cout << "6) Salir" << endl;
					int resp3;
					cin >> resp3;
					while (resp3 < 1 || resp3 > 7) {
						cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
						cin >> resp3;
					}
					if (resp3 == 1)
					{
						string placa = randomS();
						cout << "Ingrese la marca del carro: " << endl;
						string marca;
						cin >> marca;
						cout << "Ingrese modelo del carro: " << endl;
						string modelo;
						cin >> modelo;
						cout << "Ingrese año del carro: " << endl;
						string ano;
						cin >> ano;
						cout << "Ingrese el precio del carro: " << endl;
						double precio;
						cin >> precio;
						lista2.push_back(new vehiculo(placa, marca, modelo, ano, precio));
						cout << "Vehiculo agregado exitosamente!" << endl;
					} else if (resp3 == 2)
					{
						int numero;
						for (int i = 0; i < lista2.size(); ++i)
						{
							cout << "Carro #" << (i) << endl;
							cout << "Placa: " << lista2.at(i) -> getPlaca() << endl;
							cout << "Marca: " << lista2.at(i) -> getMarca() << endl;
							cout << "Modelo: " << lista2.at(i) -> getModelo() << endl;
							cout << "Año: " << lista2.at(i) -> getAno() << endl;
							cout << "Precio: " << lista2.at(i) -> getPrecio() << endl;
							if (lista2.at(i) -> getAlquilado() == true)
							{
								cout << "Alquilado?: Si" << endl;
							} else {
								cout << "Alquilado?: No" << endl;
							}
							cout << endl;
						}
						cout << "Ingrese la posición que desea modificar: ";
						cin >> numero;
						while (numero < 0 || numero > lista2.size()) {
							cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
							cin >> numero;
						}
						string placa;
						placa = randomS();
						cout << "Ingrese la marca del carro: " << endl;
						string marca;
						cin >> marca;
						cout << "Ingrese modelo del carro: " << endl;
						string modelo;
						cin >> modelo;
						cout << "Ingrese año del carro: " << endl;
						string ano;
						cin >> ano;
						cout << "Ingrese el precio del carro: " << endl;
						double precio;
						cin >> precio;
						lista2.at(numero) -> setPlaca(placa);
						lista2.at(numero) -> setMarca(marca);
						lista2.at(numero) -> setModelo(modelo);
						lista2.at(numero) -> setAno(ano);
						lista2.at(numero) -> setPrecio(precio);
						cout << "El vehiculo se ha modificado exitosamente!" << endl;
					} else if (resp3 == 3)
					{
						cout << "Cual vehiculo desea eliminar?" << endl;
						for (int i = 0; i < lista2.size(); ++i)
						{
							cout << "Carro #" << (i) << endl;
							cout << "Placa: " << lista2.at(i) -> getPlaca() << endl;
							cout << "Marca: " << lista2.at(i) -> getMarca() << endl;
							cout << "Modelo: " << lista2.at(i) -> getModelo() << endl;
							cout << "Año: " << lista2.at(i) -> getAno() << endl;
							cout << "Precio: " << lista2.at(i) -> getPrecio() << endl;
							if (lista2.at(i) -> getAlquilado() == true)
							{
								cout << "Alquilado?: Si" << endl;
							} else {
								cout << "Alquilado?: No" << endl;
							}
							cout << endl;
						}
						int resp4;
						cin >> resp4;
						while (resp4 < 0 || resp4 > lista2.size()) {
							cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
							cin >> resp4;
						}
						lista2.erase(lista2.begin()+resp4);
						cout << "Vehiculo eliminado exitosamente!" << endl;

					} else if (resp3 == 4)
					{
						for (int i = 0; i < lista2.size(); ++i)
						{
							cout << "Carro #" << (i+1) << endl;
							cout << "Placa: " << lista2.at(i) -> getPlaca() << endl;
							cout << "Marca: " << lista2.at(i) -> getMarca() << endl;
							cout << "Modelo: " << lista2.at(i) -> getModelo() << endl;
							cout << "Año: " << lista2.at(i) -> getAno() << endl;
							cout << "Precio: " << lista2.at(i) -> getPrecio() << endl;
							if (lista2.at(i) -> getAlquilado() == true)
							{
								cout << "Alquilado?: Si" << endl;
							} else {
								cout << "Alquilado?: No" << endl;
							}
							cout << endl;
						}
					} else if (resp3 == 5)
					{
						cout << "Ingrese username: " << endl;
						string user;
						cin >> user;
						cout << "Ingrese contraseña: " << endl;
						string password;
						cin >> password;
						cout << "El usuario es cliente o administrador?" << endl;
						cout << "1) Cliente\n" << "2) Administrador\n";
						int agregarU;
						cin >> agregarU;
						while (agregarU < 1 || agregarU > 2) {
							cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
							cin >> agregarU;
						}
						if (agregarU == 1)
						{
							cout << "Que tipo de membresia tendra el cliente?\n" << "1) Normal\n" << "2) Gold\n" << "3) Platinum\n";
							int memb;
							cin >> memb;
							while (memb < 1 || memb > 3) {
								cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
								cin >> memb;
							}
							if (memb == 1)
							{
								lista0.push_back(new cliente(user, password, "Normal"));
								cout << "Usuario agregado exitosamente!" << endl;
							} else if (memb == 2)
							{
								lista0.push_back(new cliente(user, password, "Gold"));
								cout << "Usuario agregado exitosamente!" << endl;
							} else {
								lista0.push_back(new cliente(user, password, "Platinum"));
								cout << "Usuario agregado exitosamente!" << endl;
							}
						} else {
							cout << "Ingrese el cargo del usuario: " << endl;
							string cargo;
							cin >> cargo;
							cout << "Ingrese el numero de seguro social: " << endl;
							int numdS;
							cin >> numdS;
							lista1.push_back(new admin(user, password, cargo, numdS));
							cout << "Usuario agregado exitosamente!" << endl;
						}
					} else {

					}
				} else {
					seguir2 = false;
				}
			}
		}
	}
	for (int i = 0; i < lista0.size(); ++i)
	{
		cliente* temp0 = lista0.at(i); 
		clientes << *temp0;
		clientes << endl;
	}
	for (int i = 0; i < lista1.size(); ++i)
	{
		admin* temp00 = lista1.at(i);
		admins << *temp00;
		admins << endl;
	}
	for (int i = 0; i < lista2.size(); ++i)
	{
		vehiculo* temp000 = lista2.at(i);
		carros << *temp000;
		carros << endl;
	}
	clientes.close();
	admins.close();
	carros.close();
	return 0;
}

string randomS() {
	int random;
	stringstream random1;
	string random2;
	for (int i = 0; i < 3; ++i)
	{
		random = rand() % 25 + 0;
		if (random == 0)
		{
			random1 << "A";
		} else if (random == 1)
		{
			random1 << "B";
		} else if (random == 2)
		{
			random1 << "C";
		} else if (random == 3)
		{
			random1 << "D";
		} else if (random == 4)
		{
			random1 << "E";
		} else if (random == 5)
		{
			random1 << "F";
		} else if (random == 6) 
		{
			random1 << "G";
		} else if (random == 7)
		{
			random1 << "H";
		} else if (random == 8)
		{
			random1 << "I";
		} else if (random == 9)
		{
			random1 << "J";
		} else if (random == 10)
		{
			random1 << "K";
		} else if (random == 11)
		{
			random1 << "L";
		} else if (random == 12)
		{
			random1 << "M";
		} else if (random == 13)
		{
			random1 << "N";
		} else if (random == 14)
		{
			random1 << "O";
		} else if (random == 15)
		{
			random1 << "P";
		} else if (random == 16)
		{
			random1 << "Q";
		} else if (random == 17)
		{
			random1 << "R";
		} else if (random == 18)
		{
			random1 << "S";
		} else if (random == 19)
		{
			random1 << "T";
		} else if (random == 20)
		{
			random1 << "U";
		} else if (random == 21)
		{
			random1 << "V";
		} else if (random == 22)
		{
			random1 << "W";
		} else if (random == 23)
		{
			random1 << "X";
		} else if (random == 24)
		{
			random1 << "Y";
		} else {
			random1 << "Z";
		}
	}
	random1 << "-";
	for (int i = 0; i < 4; ++i)
	{
		random = rand() % 9 + 1;
		random1 << random;
	}
	random2 = random1.str();
	return random2;
}