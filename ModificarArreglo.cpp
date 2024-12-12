#include <iostream>   //Ricardo Emanuel Quiñones Castillo 24041218
#include <time.h>
using namespace std;
void modificarArregloChar(char(&arregloChar)[5]);
void modificarArregloInt(int(&arregloInt)[5]);
int main()
{
	char arregloChar[]="hola";
	int arregloInt[]={1,2,3,4,5};
	cout<<"Arreglo char original: "<<arregloChar<<'\n';
	cout<<"Arreglo int original: ";
	for(int i=0;i<5;i++)
		cout<<arregloInt[i]<<" ";
	cout<<'\n';
	modificarArregloChar(arregloChar);
	modificarArregloInt(arregloInt);
	cout<<"Arreglo char original: "<<arregloChar<<'\n';
	cout<<"Arreglo int original: ";
	for(int i=0;i<5;i++)
		cout<<arregloInt[i]<<" ";
	cout<<'\n';
	return 0;
	
}
void modificarArregloChar(char(&arregloChar)[5])
{
	for(int i=0;i<5;i++)
		arregloChar[i]='X';
}
void modificarArregloInt(int(&arregloInt)[5])
{
    for(int i=0;i<5;i++)
    	arregloInt[i]*=2;
}

	
	
	
	
	
	
	
	
	
	


