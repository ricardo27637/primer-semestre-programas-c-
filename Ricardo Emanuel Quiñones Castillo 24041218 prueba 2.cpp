#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <string>

using namespace std;

int main() {
    string palabra;

    cout << "Introduce una palabra: ";
    cin >> palabra;

    // Recorremos cada letra de la palabra
    for (int i = 0; i < palabra.length(); i++) {
        // Convertimos la letra a un número (su posición en el abecedario)
        int letra = palabra[i] - 'a';

        // Sumamos 3 posiciones y nos aseguramos de que quede dentro del abecedario
        letra = (letra + 3) % 26;

        // Convertimos el número de vuelta a una letra y la reemplazamos en la palabra
        palabra[i] = letra + 'a';
    }

    cout << "La palabra cifrada es: " << palabra << endl;

    return 0;
}