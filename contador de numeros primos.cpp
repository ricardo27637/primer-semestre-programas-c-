#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

bool esPrimo(int num) {
    // ... (la misma implementación de la función esPrimo que definimos antes)
}

int contarPrimos(int arreglo[], int tamano) {
    int contadorPrimos = 0;
    for (int i = 0; i < tamano; i++) {
        if (esPrimo(arreglo[i])) {
            contadorPrimos++;
        }
    }
    return contadorPrimos;
}

int main() {
    int numeros[] = {2, 5, 8, 11, 13};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    int cantidadPrimos = contarPrimos(numeros, n);

    cout << "La cantidad de números primos en el arreglo es: " << cantidadPrimos << endl;

    return 0;
}