#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

int contarPares(int arreglo[], int tamano) {
    int contadorPares = 0;
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] % 2 == 0) {
            contadorPares++;
        }
    }
    return contadorPares;
}

int main() {
    int numeros[] = {2, 5, 8, 12, 7};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    int cantidadPares = contarPares(numeros, n);

    cout << "La cantidad de números pares en el arreglo es: " << cantidadPares << endl;

    return 0;
}