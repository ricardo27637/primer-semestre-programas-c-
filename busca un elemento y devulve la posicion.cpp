#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

int buscarElemento(int arreglo[], int tamano, int elementoBuscado) {
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == elementoBuscado) {
            return i; // Si encontramos el elemento, retornamos su índice
        }
    }
    return -1; // Si no encontramos el elemento, retornamos -1
}

int main() {
    int numeros[] = {2, 5, 8, 12, 7};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int elementoBuscar = 12;

    int posicion = buscarElemento(numeros, n, elementoBuscar);

    if (posicion != -1) {
        cout << "El elemento " << elementoBuscar << " se encuentra en la posición " << posicion << endl;
    } else {
        cout << "El elemento " << elementoBuscar << " no se encuentra en el arreglo." << endl;
    }

    return 0;
}