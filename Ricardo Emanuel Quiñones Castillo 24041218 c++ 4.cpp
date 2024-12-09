#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8); //configurar para que use todo el alfabeto ingles 
	SetConsole(CP_UTF8);//para la ñ
	double valor = 123.456789;
	
	cout << fixed;  //presicion 
	cout.precision(2);
	cout << "con 2 decimales: " << valor << endl;
	
	cout.precision(4);
	cout << "con 4 decimales: " << valor << endl;
	
	cout.precision(6);
	cout << "con 6 decimales: " << valor << endl;
	
	//cout.unseft(ios::fixed); //desactiva fixed
	cout.precision(2);
	cout << "Con 2 digitos significativos: " << valor << endl;
	cout << "prueba de áéíóúúñ#";
	return 0;
	
	
	
}
