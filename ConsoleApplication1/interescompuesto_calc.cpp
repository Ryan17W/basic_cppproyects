#include <iostream>
#include <cmath> //para usar pow()
using namespace std;

double calcInteresCompuesto(double montoInicial, double tasaInteres, int periodoTiempo) {
	double montoFinal = montoInicial * pow((1 + tasaInteres / 100), periodoTiempo);
	return montoFinal;
}

int calcInCom() {
	double montoInicial, tasaInteres;
	int periodoTiempo;

	cout << "Ingrese el monto inicial: ";
	cin >> montoInicial;

	cout << "Ingrese la tasa de interés (en porcentajes): ";
	cin >> tasaInteres;

	cout << "Ingrese el periodo de tiempo (en años): ";
	cin >> periodoTiempo;

	double montoFinal = calcInteresCompuesto(montoInicial, tasaInteres, periodoTiempo);
	cout << "El monto final luego de " << periodoTiempo << " años, es de: " << montoFinal << endl;

	return 0;
}