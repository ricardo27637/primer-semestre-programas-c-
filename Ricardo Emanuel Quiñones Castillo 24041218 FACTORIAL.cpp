#include <windows.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x,factorial;
	cout<<"Dime un numero para calcular su factorial: ";
	cin>>factorial;
	cout<<factorial;
	for(x=factorial-1;x>=1;x--)
	{
		cout<<"x"<<x;
		factorial=factorial*x;
	}
	cout<<"= "<<factorial;
}
