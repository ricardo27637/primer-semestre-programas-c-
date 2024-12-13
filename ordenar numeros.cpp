#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

const int MAX_TAMAnO = 100; // Tamaño máximo del arreglo

void imprimirArreglo(int arreglo[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

// Algoritmo de ordenamiento por burbuja
void burbuja(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                swap(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

// Algoritmo de ordenamiento por inserción
void insercion(int arreglo[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arreglo[i];
        int j = i - 1;

        while (j >= 0 && arreglo[j] > key) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = key;
    }
}

// Algoritmo de ordenamiento por selección
void seleccion(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arreglo[j] < arreglo[min_idx]) {
                min_idx = j;
            }
        }
        swap(arreglo[min_idx], arreglo[i]);
    }
}

int main() {
    int numeros[MAX_TAMAnO] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7; // Tamaño del arreglo

    cout << "Arreglo original: ";
    imprimirArreglo(numeros, n);

    // Descomenta la línea del algoritmo que deseas probar
    // burbuja(numeros, n);
    // insercion(numeros, n);
    seleccion(numeros, n);

    cout << "Arreglo ordenado: ";
    imprimirArreglo(numeros, n);

    return 0;
}