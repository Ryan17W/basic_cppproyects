#include <iostream>
#include <vector> //incluye funciones para acceder, agregar, eliminar elementos; también para cambiar el tamaño del vector, entre otras operations
#include <string> //para cadenas de texto (más útil que char)
using namespace std;

struct Tarea {
	string descripcion; //para almacenar el nombre de las tareas
	bool completada; //para indicar si la tarea está completada o no
};

int lista() {
	vector<Tarea> listaTareas; //el vector llamado listaTareas, almacenerá objetos de tipo Tarea

	while (true) { //recordemos que el while es hasta que el usuario decida salir
		cout << "\n1. Agregar tarea\n2. Marcar tarea como completada\n3. Eliminar tarea\n4. Mostrar lista de tareas\n5. Salir\n";
		cout << "Ingrese la opción deseada: ";
		int opcion;
		cin >> opcion;

		switch (opcion) { //switch es una estructura de control para manejar la opción ingresada
		case 1: {
			Tarea nuevaTarea; //se crea un objeto de tipo Tarea llamado nuevaTarea
			cout << "Ingrese la descripción de la nueva tarea: ";
			cin.ignore(); //ignora cualquier caracter adicional del buffer que sea ingresado después de haber ingresado un caracter (ya sea un número o un string o un caracter)
			getline(cin, nuevaTarea.descripcion);//lee la línea completa de entrada, o sea, de cin y luego lo almacena en nuevaTarea.descripcion
			nuevaTarea.completada = false;//determina que la nuevaTarea no está marcada como completada
			listaTareas.push_back(nuevaTarea);//el push.back agrega la nuevaTarea a lo último del vector (o de la lista) de listaTareas
			cout << "Tarea agregada correctamente!\n";
			break;//sale de la opción 1 y vuelve al menú
		}
		case 2: {
			if (listaTareas.empty()) { //mira si la listaTareas está vacía
				cout << "La lista de tareas está vacía.\n";
				break; //sale de la opción 2 y vuelve al menú
			}
			cout << "Ingrese el número de la tarea que desea marcar como completada: ";
			int numTarea;
			cin >> numTarea;
			if (numTarea >= 1 && numTarea <= listaTareas.size()) {
				listaTareas[numTarea - 1].completada = true;
				cout << "Tarea marcada como completada.\n";
			}
			else {
				cout << "Número de tarea inválido.\n";
			}
			break;
		}
		case 3: {
			if (listaTareas.empty()) {
				cout << "La lista de tareas está vacía.\n";
				break;
			}
			cout << "Ingrese el número de la tarea que desea eliminar: ";
			int numTarea;
			cin >> numTarea;
			if (numTarea >= 1 && numTarea <= listaTareas.size()) {
				listaTareas.erase(listaTareas.begin() + numTarea - 1);
				cout << "Tarea eliminada satisfactoriamente.\n";
			}
			else {
				cout << "Número de tarea inválido.\n";
			}
			break;
		}
		case 4: {
			cout << "\nLista de tareas:\n";
			for (int i = 0; i < listaTareas.size(); i++) {
				cout << i + 1 << ". ";
				if (listaTareas[i].completada) {
					cout << "[X] ";

				}
				else {
					cout << "[ ]";
				}
				cout << listaTareas[i].descripcion << endl;
			}
			break;
		}
		case 5: {
			cout << "Saliendo de la aplicación.\n";
			return 0;
		}
		default: {
			cout << "Opción inválida. Por favor, ingrese un número entre 1 y 5.\n";
			break;
		}
		}
	}

	return 0;
}