#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

using namespace std;

void imprimirMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void transpuesta(int matriz[][10], int filas, int columnas, int transpuesta[][10]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int filas = 3, columnas = 3;
    int transpuesta[3][3];

    cout << "Matriz original:\n";
    imprimirMatriz(matriz, filas, columnas);

    transpuesta(matriz, filas, columnas, transpuesta);

    cout << "\nMatriz transpuesta:\n";
    imprimirMatriz(transpuesta, columnas, filas);

    return 0;
}