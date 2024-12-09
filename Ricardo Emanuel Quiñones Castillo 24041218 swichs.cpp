#include <windows.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <iostream>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	char c;
	int opcion;
	cout<<"Dame un valor binario 0/1: ";
	cin>>c;
	switch(c)
	{
		case '0':
		cout<<"Falso o apagado\n";
		break;
		case '1':
		cout<<"Cierto o encendido\n";
		break;
		default:
		cout<<"Tecleaste un valor incorrecto\n"; 
	}
	return 0;
}
