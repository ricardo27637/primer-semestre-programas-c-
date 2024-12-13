#include <iostream>   //Ricardo Emanuel Quiñones Castillo 24041218
#include <time.h>
using namespace std;
double area(double a, double b);
double areaT(double a, double b);
double areaR(double a, double b);

int main()
{
	int base, altura,respuesta;
	double resultado;
	cout<<"De que figura quieres sacar el area?\n";
	cout<<"1 Cuadrado\n";
	cout<<"2 Triangulo\n";
	cout<<"3 Rectangulo\n";
	cout<<"Elige un numero del 1 al 3\n";
	cin>>respuesta;
	
	switch(respuesta)
	{
		case 1:
			system("CLS");
			cout<<"Dame la base: ";
			cin>>base;
			cout<<"Dame la altura: ";
			cin>>altura;
			resultado=area(base,altura);
			cout<<resultado;
			break;
			
			
		case 2:
			system("CLS");
			cout<<"Dame la base: ";
			cin>>base;
			cout<<"Dame la altura: ";
			cin>>altura;
			resultado=areaT(base,altura);
			cout<<resultado;
			break;
		
		case 3:
			system("CLS");
			cout<<"Dame la base: ";
			cin>>base;
			cout<<"Dame la altura: ";
			cin>>altura;
			resultado=areaR(base,altura);
			cout<<resultado;
			break;
			
	}
	
}
double area(double a, double b)
{
	return(a*b);
}
double areaT(double a, double b)
{
    return(a*b)/2;	
}
double areaR(double a, double b)
{
    return(a*b);	
}










