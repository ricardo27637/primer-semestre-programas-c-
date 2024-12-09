#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char tipo;
	int tamano;
	float inicial, kilos, total;
	
	cout<<"Dime el tipo de uva: ";
	cin>>tipo;
	tipo=toupper(tipo);
	cout<<"Dime el tamano de la uva: ";        
	cin>>tamano;
	
	
	if((tipo=='A' or tipo=='B')and(tamano== 1 or tamano==2))
	{
		cout<<"Dime cuantos kilos de uva se venden: ";
		cin>>kilos;
		cout<<"Dime el precio inicial por kilo: ";
		cin>>inicial;
		
		switch(tipo)
		{
			case'A':
				switch(tamano)
				{
					case 1:
						inicial+=.2;
						break;
						
						case 2:
						inicial+=.3;
						break;
				}
				break;
				case'B':
					switch(tamano)
					{
						case 1:
						inicial-=.3;
						break;
						
						case 2:
						inicial-=.5;
						break;
					}
					break;
		}
		total=kilos*inicial;
		cout<<"La venta total es de: "<<total;
	}
	else
	cout<<"Datos no validos";
	return 0;
	
	
	
	
	
	
	
	
}
