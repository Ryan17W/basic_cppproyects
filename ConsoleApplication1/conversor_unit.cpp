#include <iostream>
#include <string>
#include "conversor_unit.h"
using namespace std;

#include "conversor_unit.h"

int conversor_unit() {
	double valor;
	string unidad_origen, unidad_destino;

	cout << "Ingrese el valor a convertir: ";
	cin >> valor;
	cout << "Ingrese la unidad origen (m, cm, ft): ";
	cin >> unidad_origen;
	cout << "Ingrese la unidad destino (m, cm, ft): ";
	cin >> unidad_destino;

	if (unidad_origen == "m" && unidad_destino == "cm") {
		cout << "Resultado: " << valor * 100 << " centímetros";
	}
	else if (unidad_origen == "m" && unidad_destino == "ft") {
		cout << "Resultado: " << valor * 3.2808399 << " pies";
	}
	else if (unidad_origen == "cm" && unidad_destino == "m") {
		cout << "Resultado: " << valor / 100 << " metros";
	}
	else if (unidad_origen == "cm" && unidad_destino == "ft") {
		cout << "Resultado: " << valor / 30.48 << " pies";
	}
	else if (unidad_origen == "ft" && unidad_destino == "m") {
		cout << "Resultado: " << valor * 3.2808399 << " metros";
	}
	else if (unidad_origen == "ft" && unidad_destino == "cm") {
		cout << "Resultado: " << valor / 30.48 << " centímetros";
	}
	else {
		cout << "Unidad de conversión no admitida por el momento";
	}

	return 0;
}