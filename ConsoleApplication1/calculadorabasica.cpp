#include <iostream>
using namespace std;

int calculadora() {
    char op;
    float num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> op;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (op) {
    case '+':
        cout << "Resultado: " << num1 + num2;
        break;
    case '-':
        cout << "Resultado: " << num1 - num2;
        break;
    case '*':
        cout << "Resultado: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << "Resultado: " << num1 / num2;
        else
            cout << "Error: División por cero";
        break;
    default:
        cout << "Operador no válido";
        break;
    }

    return 0;
}
