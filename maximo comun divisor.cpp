#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

// Función para calcular el máximo común divisor (MCD) utilizando el algoritmo de Euclides
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    int resultado = mcd(num1, num2);

    cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}