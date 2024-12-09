#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <string>
#include <map>

using namespace std;

int main() {
    string palabra;
    char opcion;

    do {
        cout << "Ingrese una palabra (o 'salir' para terminar): ";
        //getline(cin, palabra);
        cin>>palabra;

        if (palabra == "salir") {
            break;
        }

        do {
            string palabra1 = ""; // Inicializar la cadena vacia dentro del ciclo interno

            cout << "Codigo ASCII de la palabra: "; 
            for (char c : palabra) {
                cout << (int)c << " ";
            }
            cout << endl;

            int codigo;
            cout << "Ingrese los codigos ASCII (0 para terminar):\n";

            while (true) {
                cin >> codigo;
                if (codigo == 0) {
                    break;
                }
                palabra1 += static_cast<char>(codigo);
            }

            cout << "La palabra formada es: " << palabra1 << endl;

            cout << "Desea continuar con esta palabra? (s/n): ";
            cin >> opcion;
        } while (opcion == 's' or opcion == 'S');

        cout << "Desea continuar con otra palabra? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' or opcion == 'S');

    return 0;
}
