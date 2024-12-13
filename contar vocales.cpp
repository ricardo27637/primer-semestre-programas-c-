#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218
#include <string>

using namespace std;

int contarVocales(const string& cadena) {
    int contadorVocales = 0;
    for (char caracter : cadena) {
        char caracterMinuscula = tolower(caracter);
        if (caracterMinuscula == 'a' || caracterMinuscula == 'e' || caracterMinuscula == 'i' ||
            caracterMinuscula == 'o' || caracterMinuscula == 'u') {
            contadorVocales++;
        }
    }
    return contadorVocales;
}

int main() {
    string palabra = "Hola, mundo!";
    int cantidadVocales = contarVocales(palabra);

    cout << "La palabra \"" << palabra << "\" tiene " << cantidadVocales << " vocales." << endl;

    return 0;
}