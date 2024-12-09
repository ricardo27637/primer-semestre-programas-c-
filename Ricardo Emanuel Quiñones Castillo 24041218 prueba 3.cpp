#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <string>

using namespace std;

string cifrar(string palabra) {
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = ((palabra[i] - 'a' + 3) % 26) + 'a';
    }
    return palabra;
}

string descifrar(string palabra) {
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = ((palabra[i] - 'a' - 3 + 26) % 26) + 'a'; // Sumamos 26 para evitar números negativos
    }
    return palabra;
}

int main() {
    string palabra;

    cout << "Introduce una palabra: ";
    cin >> palabra;

    // Ciframos la palabra
    string palabraCifrada = cifrar(palabra);
    cout << "La palabra cifrada es: " << palabraCifrada << endl;

    // Desciframos la palabra
    string palabraDescifrada = descifrar(palabraCifrada);
    cout << "La palabra descifrada es: " << palabraDescifrada << endl;

    return 0;
}