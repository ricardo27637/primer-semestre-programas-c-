#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218
#include <ctime>

using namespace std;

// Función para generar un número aleatorio entre 1 y 6 (simulando un dado)
int lanzarDado() {
    static int semilla = time(0);
    semilla = (semilla * 1103515245 + 12345) % 2147483647;
    return 1 + (semilla % 6);
}

// Función para simular múltiples lanzamientos y calcular frecuencias
void simularLanzamientos(int numLanzamientos, int frecuencias[]) {
    for (int i = 0; i < numLanzamientos; ++i) {
        int resultado = lanzarDado();
        frecuencias[resultado - 1]++; // El índice del arreglo comienza en 0
    }
}

int main() {
    int numLanzamientos;
    cout << "Ingrese el número de lanzamientos: ";
    cin >> numLanzamientos;

    // Arreglo para almacenar las frecuencias de cada número (1-6)
    int frecuencias[6] = {0};

    simularLanzamientos(numLanzamientos, frecuencias);

    // Mostrar los resultados
    cout << "Frecuencia de cada número:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Número " << i + 1 << ": " << frecuencias[i] << " veces\n";
    }

    return 0;
}