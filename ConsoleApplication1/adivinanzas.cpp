#include <iostream>
#include <cstdlib> //proporciona funciones para generar números aleatorios
#include <ctime> //para trabajar con tiempos y fechas
using namespace std; //para no tener que escribir std::, entonces se escribe directamente cout o cin o endl directamente

int adivinanza() {
	srand(time(0)); //Obtiene el tiempo actual en segundos y luego lo usa como semilla para la función srand, que inicializa el generador de números aleatorios, ayudando a obtener diferentes números cada vez que se ejectua el programa
	//rand() genera un número aleatorio y al calcularlo con %100 estamos obteniendo el resto de una división dividido por el número 100, garantizando que esté en el rango de 0 a 99
	int numeroSecreto = rand() % 100 + 1; //Genera un número aleatorio del 1 a 100 
	int intento, intentosRestantes = 5;

	cout << "¡Bienvenido al juego de adivinanzas!" << endl;
	cout << "¡Tienes 5 intentos para adivinar el número secreto! El cual era: " << numeroSecreto << endl;

	while (intentosRestantes > 0) {
		cout << "Ingrese un número del 1 al 100: ";
		cin >> intento;

		if (intento == numeroSecreto) {
			cout << "¡Felicidades! ¡Has adivinado el número secreto!" << endl;
			break;
		}
		else {
			cout << "Número incorrecto.";

			if (intento < numeroSecreto) {
				cout << " El número secreto es mayor." << endl;
			}
			else {
				cout << " El número secreto es menor." << endl;
			}

			intentosRestantes--; //decrementa el número de intentos restantes

			if (intentosRestantes > 0) {
				cout << "Tienes " << intentosRestantes << " intentos restantes." << endl;
			}
			else {
				cout << "Lo siento, ya no tienes más intentos, perdiste.\n El número secreto era: " << numeroSecreto << endl;
			}
		}
	}

	return 0;

}