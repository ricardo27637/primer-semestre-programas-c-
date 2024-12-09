#include <windows.h>   //Ricardo Emanuel Quiñones Castilo 24041218
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, y=1;
	cout<<"Lectura de enteros usando do while\n";
	do
	{
		cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
		continue;
		cout<<"Por aqui pasa solo cuando el numero es diferente de 0\n";
		y++;
	}while(y<6);
	system("PAUSE");
	
	system ("CLS");
	cout<<"Lectura de 5 numeros usando un for estandar\n";
	for(y=1;y<6;y++)
	{
		cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
		continue;
		cout<<"Por aqui pasa solo cuando el numero es diferente de 0\n";
	}
	return 0;
}
