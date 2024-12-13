#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218
#include <string>

using namespace std;

bool esPalindromo(string cadena) {
    int inicio = 0;
    int fin = cadena.length() - 1;

    while (inicio < fin) {
        if (cadena[inicio] != cadena[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }

    return true;
}

int main() {
    string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    if (esPalindromo(cadena)) {
        cout << "La cadena es un palindromo." << endl;
    } else {
        cout << "La cadena no es un palindromo." << endl;
    }

    return 0;
}