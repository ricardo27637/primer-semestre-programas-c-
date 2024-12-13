#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

bool esPrimo(int num) {
    // Un número primo es divisible solo por 1 y por sí mismo.
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num = 3;
    char continuar;

    cout << "Generador de números primos a partir del 3." << endl;

    do {
        if (esPrimo(num)) {
            cout << num << " es un número primo." << endl;
            cout << "Desea generar el siguiente primo? (S/N): ";
            cin >> continuar;

            // Validación de la respuesta del usuario
            while (continuar != 'S' && continuar != 'N') {
                cout << "Opción inválida. Ingrese S o N: ";
                cin >> continuar;
            }
        }
        num++;
    } while (continuar == 'S');

    return 0;
}