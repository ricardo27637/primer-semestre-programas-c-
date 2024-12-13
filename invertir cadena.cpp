#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218
#include <cstring>

using namespace std;

void invertirCadena(char* cadena) {
    int n = strlen(cadena);
    char* inicio = cadena;
    char* fin = cadena + n - 1;
    char temp;

    while (inicio < fin) {
        temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main() {
    char cadena[] = "Hola mundo";
    invertirCadena(cadena);
    cout << cadena << endl; // Imprime "odnum aloH"
    return 0;
}