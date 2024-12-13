#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

// Función para intercambiar dos elementos de un arreglo
void intercambiar(int arreglo[], int i, int j) {
    int temp = arreglo[i];
    arreglo[i] = arreglo[j];
    arreglo[j] = temp;
}

int main() {
    int numeros[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Arreglo original: ";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Intercambiamos el primer y último elemento
    intercambiar(numeros, 0, n - 1);

    cout << "Arreglo después de intercambiar el primer y último elemento: ";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}