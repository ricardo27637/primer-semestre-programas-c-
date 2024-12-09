#include <iostream>   //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float lado1, lado2, area, perimetro;
	cout<<"Dame la medida del lado 1: ";
	cin>>lado1;
	cout<<"Dame la medida del lado 2: ";
	cin>>lado2;
	area=lado1*lado2;
	perimetro=(lado1*2)+(lado2*2);
	
	cout<<"El area mide: "<<area<<"\n";
	cout<<"El perimetro mide: "<<perimetro<<"\n";
	
	printf("El area mide: %5.0f\n",area);
	printf("El perimetro mide: %5.2f",perimetro);
	return 0;
	
	
	
	
	
	
	
}
