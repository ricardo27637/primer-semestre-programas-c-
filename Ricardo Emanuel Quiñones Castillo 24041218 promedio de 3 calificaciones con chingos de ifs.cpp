#include <windows.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <iostream>
using namespace std;
int main( )
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int cal1,cal2,cal3,prom;
	cout<<"Dime tu nombre: ";
	cin>>nombre;
	cout<<"Dame la calificación 1: ";
	cin>>cal1;
	cout<<"Dame la calificación 2: ";
	cin>>cal2;
	cout<<"Dame la calificación 3: ";
	cin>>cal3;
	prom=(cal1+cal2+cal3)/3;
	cout<<nombre<<", tu promedio es: "<<prom<<", y tu calificación final es: ";
	if(prom>=90)
	{
		cout<< "A";
	}
	else
	{
		if(prom>=80)
		{
			cout<<"B";
		}
		else
		{
			if(prom>=70)
			{
				cout<<"C";
			}
			else
			{
				if(prom>=60)
				{
					cout<<"D";
				}
				else
				{
					cout<<"NA";
				}
			}
		}	
	}	
	return 0;
}
