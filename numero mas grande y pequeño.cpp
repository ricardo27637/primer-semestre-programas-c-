#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

int main() {
    int numeros[] = {3, 7, 2, 9, 5};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    int maximo = numeros[0];
    int minimo = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        } else if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    cout << "El número más grande es: " << maximo << endl;
    cout << "El número más pequeño es: " << minimo << endl;

    return 0;
}