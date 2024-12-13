#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

void multiplicarMatrices(int matriz1[][10], int filas1, int columnas1,
                         int matriz2[][10], int filas2, int columnas2,
                         int resultado[][10]) {
    // Verificar si las matrices se pueden multiplicar
    if (columnas1 != filas2) {
        cout << "No se pueden multiplicar las matrices." << endl;
        return;
    }

    // Multiplicar las matrices
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matriz2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int resultado[2][2];

    multiplicarMatrices(matriz1, 2, 3, matriz2, 3, 2, resultado);

    cout << "Resultado de la multiplicación:\n";
    imprimirMatriz(resultado, 2, 2);

    return 0;
}