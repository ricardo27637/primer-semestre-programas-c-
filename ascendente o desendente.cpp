#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

void ordenarBurbuja(int arreglo[], int n, bool ascendente) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if ((arreglo[j] > arreglo[j + 1] && ascendente) ||
                (arreglo[j] < arreglo[j + 1] && !ascendente)) {
                // Intercambiar elementos
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[] = {5, 2, 8, 1, 9};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    bool ordenarAscendente = true; // Cambia a false para ordenar de forma descendente

    cout << "Arreglo original: ";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    ordenarBurbuja(numeros, n, ordenarAscendente);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}