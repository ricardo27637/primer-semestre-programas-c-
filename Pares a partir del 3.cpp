#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

bool esPar(int num) {
    // Un número es par si es divisible por 2.
    return num % 2 == 0;
}

int main() {
    int num = 2;
    char continuar;

    cout << "Generador de números pares a partir del 2." << endl;

    do {
        if (esPar(num)) {
            cout << num << " es un número par." << endl;
            cout << "Desea generar el siguiente par? (S/N): ";
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