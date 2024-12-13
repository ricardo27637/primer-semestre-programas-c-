#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

void encontrarMaxMin(int arreglo[], int n, int& maximo, int& minimo) {
    maximo = arreglo[0];
    minimo = arreglo[0];

    for (int i = 1; i < n; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        } else if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }
}

int main() {
    int numeros[] = {3, 7, 2, 9, 5};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    int maximo, minimo;

    encontrarMaxMin(numeros, n, maximo, minimo);

    cout << "El número más grande es: " << maximo << endl;
    cout << "El número más pequeño es: " << minimo << endl;

    return 0;
}