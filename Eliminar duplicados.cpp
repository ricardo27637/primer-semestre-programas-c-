#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

void eliminar_duplicados(int arr[], int n) {
    int temp[n];
    int j = 0;
    bool found;

    for (int i = 0; i < n; i++) {
        found = false;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp[j++] = arr[i];
        }
    }

    // Copiar los elementos únicos de vuelta al arreglo original
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int numeros[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    eliminar_duplicados(numeros, n);

    for (int i = 0; i < n; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}