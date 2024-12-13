#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Ingrese el valor de n para calcular el n-ésimo número de Fibonacci: ";
    cin >> n;

    cout << "El " << n << "-ésimo número de Fibonacci es: " << fibonacci(n) << endl;

    return 0;
}