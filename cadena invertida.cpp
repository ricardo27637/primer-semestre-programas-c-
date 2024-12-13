#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218
#include <string>

using namespace std;

// Función para invertir una cadena de caracteres
string invertirCadena(string cadena) {
    int n = cadena.length();
    string cadenaInvertida;

    for (int i = n - 1; i >= 0; i--) {
        cadenaInvertida += cadena[i];
    }

    return cadenaInvertida;
}

int main() {
    string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    string cadenaInvertida = invertirCadena(cadena);

    cout << "La cadena invertida es: " << cadenaInvertida << endl;

    return 0;
}