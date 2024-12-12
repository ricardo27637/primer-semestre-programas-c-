#include <iostream>   //Ricardo Emanuel Quiñones Castillo 24041218
using namespace std;
void parImpar(int numero);
int main()
{
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	parImpar(numero);
	return 0;
}
void parImpar(int numero)
{
	if(numero%2==0)
		cout<<"El numero es par.\n";
		else
		cout<<"El numero es impar.\n";
}
