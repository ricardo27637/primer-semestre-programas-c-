#include <iostream>   //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int pp,pdes,descuento, pcd;
	
	cout<<"Dame el valor del producto: ";
	cin>>pp;
	cout<<"Dame el descuento del producto: ";
	cin>>pdes;
	descuento=(pp*pdes)/100;
	pcd=pp-descuento;
	
	cout<<"\n el descuento es de: "<<descuento;
	cout<<"\n presio ya con descuento: "<<pcd;
	cout<<"\n presio original del producto: "<<pp;
	 
	return 0;
}
