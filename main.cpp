#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#include "cliente.h"
#include "admin.h"
#include "vehiculo.h"

using namespace std;

int menu();

int main() {
	bool seguir = true;
	while (seguir == true) {
		int opcion;
		opcion = menu();
		if (opcion == 1)
		{
			/* code */
		} else {
			
		}
	}
	return 0;
}

int menu() {
	cout << "-------Menu-------\n";
	cout << "1) Agregar\n";
	cout << "2) Listar\n";
	cout << "3) Eliminar\n";
	cout << "4) Transferir a otro Museo\n";
	cout << "5) Busqueda\n";
	cout << "6) Salir\n";
	int resp;
	cin >> resp;
	return resp;
}