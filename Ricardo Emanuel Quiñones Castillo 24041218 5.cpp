#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <string>

using namespace std;

string cifrar(string palabra, int desplazamiento) {
    for (char &c : palabra) {
        c = ((c - 'a' + desplazamiento) % 26) + 'a';
    }
    return palabra;
}

string descifrar(string palabra, int desplazamiento) {
    for (char &c : palabra) {
        c = ((c - 'a' - desplazamiento + 26) % 26) + 'a';
    }
    return palabra;
}

int main() {
    string palabra;
    int opcion, desplazamiento;

    do {
        cout << "\nMenú:\n";
        cout << "1. Cifrar un mensaje\n";
        cout << "2. Descifrar un mensaje\n";
        cout << "3. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la palabra a cifrar: ";
                cin >> palabra;
                cout << "Ingrese el desplazamiento: ";
                cin >> desplazamiento;
                cout << "La palabra cifrada es: " << cifrar(palabra, desplazamiento) << endl;
                break;
            case 2:
                cout << "Ingrese la palabra a descifrar: ";
                cin >> palabra;
                cout << "Ingrese el desplazamiento: ";
                cin >> desplazamiento;
                cout << "La palabra descifrada es: " << descifrar(palabra, desplazamiento) << endl;
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 3);

    return 0;
}