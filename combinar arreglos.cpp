#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218

void combinar_arreglos(int arr1[], int n1, int arr2[], int n2, int resultado[]) {
    int i = 0, j = 0, k = 0;

    // Recorremos ambos arreglos hasta que uno de ellos se agote
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            resultado[k++] = arr1[i++];
        } else {
            resultado[k++] = arr2[j++];
        }
    }

    // Copiamos los elementos restantes del arreglo que no se agotó
    while (i < n1) {
        resultado[k++] = arr1[i++];
    }
    while (j < n2) {
        resultado[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n = n1 + n2;
    int resultado[n];

    combinar_arreglos(arr1, n1, arr2, n2, resultado);

    // Imprimir el resultado
    for (int i = 0; i < n; i++) {
        std::cout << resultado[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}






//tienes una caja de zapatos. Para saber cuántos pares de zapatos caben en esa caja, necesitas saber el tamaño de la caja y el tamaño de cada par de zapatos, ¿verdad?

//En programación, sizeof es como una regla que nos sirve para medir el tamaño de las cosas. En lugar de medir en centímetros o pulgadas, sizeof mide en bytes, que es una unidad muy pequeña de información que la computadora utiliza.




