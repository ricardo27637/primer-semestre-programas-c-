#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218 
#include <string>
#include <map>

using namespace std;

int main() {
    string palabra;
    char opcion;
    string palabra1 = ""; // Inicializamos una cadena vacía para almacenar la palabra
    int codigo;

    do {
        cout << "Ingrese una palabra (o 'salir' para terminar): ";
        getline(cin, palabra);

        if (palabra == "salir") {
            break;
        }

        cout << "Código ASCII de la palabra: ";
        for (char c : palabra) {
            cout << (int)c << " ";
        }
        cout << endl;

       

     cout << "Ingrese los códigos ASCII (0 para terminar):\n";

    while (true) {
        cin >> codigo;
        if (codigo == 0) {
            break; // Terminamos el ciclo si se ingresa 0
        }
        palabra1 += static_cast<char>(codigo); // Convertimos el código a caracter y lo agregamos a la cadena
    }

    cout << "La palabra formada es: " << palabra1 << endl;
        //}
        //cout << endl;

        cout << "Desea continuar? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' or opcion == 'S');

    return 0;
}

// Función auxiliar para dividir una cadena por espacios
/*vector<string> split(const string& s) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, ' ')) {
        tokens.push_back(token);
    }
    return tokens;
}*/