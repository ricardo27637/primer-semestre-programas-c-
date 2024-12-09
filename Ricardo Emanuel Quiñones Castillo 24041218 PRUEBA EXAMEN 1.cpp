#include <windows.h> //pida un numero por teclado y en un ciclo otro si le atina mensaje le atino al precio
#include <iostream>   //Ricardo Emanuel Quiñones Castilo 24041218
#include<time.h>//random
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, precio;
	
	srand(time(0));
	precio=rand()%101;
	
	do
	{
		cout<<"Dime el precio (entre 0 y 100): ";
		cin>>x;
		if(x>precio)
			cout<<"MUT ARRIBA\n";
		else
			if(x<precio)
				cout<<"MUY ABAJO\n";
					else
						cout<<"ACERTASTE, el precio es: "<<precio;
	}while(x!=precio);
	return 0;
	

	
}
