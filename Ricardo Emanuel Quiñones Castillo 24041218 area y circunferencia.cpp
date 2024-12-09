#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
int main()
{
	//area y circuferencia
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float radio,area=0.0, circunferencia=0.0;
	const float PI=3.1416;
	cout<<"PI="<<PI<<"\n";
	//PI=0 NO SE PUEDE MODIFICAR UNA CONSTANTE
	
	cout<<fixed;
	cout.precision(4);
	cout<<"Dame el radio de un circulo:";
	cin>>radio;
	area=PI*radio*radio;
	circunferencia=PI*radio*2;
	cout<<"Usando presicion a cuatro decimales con fixed\n";
	cout<<"Para un circulo de radio: "<<radio<<"\n";
	cout<<"el area es: "<<area<<"\n";
	cout<<"la circunferencia es: "<<circunferencia<<"\n";
	cout<<"usando precision a dos decimales con printf\n";
	printf("Para un circulo de radio: %5.2f \n",radio);
	printf("El area es: %5.2f\n",area);
	printf("La circunferencia es: %5.2f\n",circunferencia);
	return 0;
	
	
	
	
	
}
