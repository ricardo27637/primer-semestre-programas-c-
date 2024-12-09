#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
using namespace std;
int main()
{
	int n;
	cout<<"Dame un numero para determinar si es positivo o negativo: ";
	cin>>n;
	
	n>0?cout<<"El numero es positivo\n":cout<<"El numero es negativo\n";
	system("pause");
	if(n>0)
	{
		cout<<"El numero es positivo\n";
	}
	else
	{
		cout<<"El numero es negativo\n";
	}
	
	system("pause");
	
	if(n>0)
	{
		cout<<"El numero es positivo\n";
	}
	else
	{
		if(n<0)
		{
			cout<<"El numero es negativo\n";
		}
	}
	return 0;
}
