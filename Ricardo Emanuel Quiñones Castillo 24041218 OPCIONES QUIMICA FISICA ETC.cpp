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
	
	system("pause");
	system("cls");
	printf("1,-QUIMICA\n");
	printf("2,-FISICA\n");
	printf("3,-MATEMATICAS\n");
	printf("4,-RECREO\n");
	printf("SELECCIONA UNA OPCION: ");
	cin>>opcion;
	switch(opcion)
	{
	case 1:printf("SELECCIONASTE QUIMICA");
	break;
	case 2:printf("SELECCIONASTE FISICA");
	break;
	case 3:printf("SELECCIONASTE MATEMATICAS");
	break;
	case 4:printf("SELECCIONASTE RECREO");
	break;	
	default:
	cout<<"SELECCIONASTE UNA OPCION NO VALIDA";  
		
		
		
	}
}
