#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

// Función para sumar dos números
int sumar(int a, int b) {
    return a + b;
}

// Función para restar dos números
int restar(int a, int b) {
    return a - b;
}

// Función para multiplicar dos números
int multiplicar(int a, int b) {
    return a * b;
}

// Función para dividir dos números
double dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: División por cero." << endl;
        return 0; // O puedes lanzar una excepción
    }
    return static_cast<double>(a) / b; // Convertimos a double para obtener un resultado con decimales
}

int main() {
    int num1, num2;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        default:
            cout << "Operación inválida." << endl;
    }

    return 0;
}