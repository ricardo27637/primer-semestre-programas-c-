#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

// Función para comprobar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // Los números menores o iguales a 1 no son primos
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false; // Si es divisible por algún número entre 2 y su raíz cuadrada, no es primo
        }
    }

    return true; // Si no es divisible por ningún número, es primo
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}