#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218
#include <cmath>

using namespace std;

bool esPrimo(int num) {
    // Los números menores o iguales a 1 no son primos
    if (num <= 1) {
        return false;
    }
    // Los números 2 y 3 son primos
    if (num <= 3) {
        return true;
    }
    // Los números divisibles por 2 o 3 no son primos
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    // Comprobamos divisibilidad solo hasta la raíz cuadrada de num
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
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