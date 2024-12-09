#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc,ri,rb,cf;
	cout<<"Las respuestas correctas valen 5 puntos c/u\n";
	cout<<"Las respuestas incorrectas valen 1 punto c/u\n";
	cout<<"Las respuestas en blanco valen 0 puntos c/u\n";
	cout<<"Dime la cantidad de respuestas correctas: ";
	cin>>rc;
	cout<<"Dime la cantidad de respuestas incorrectas: ";
	cin>>ri;
	cout<<"Dime la cantidad de respuestas en blanco: ";
	cin>>rb;
	cf=(rc*5)+(ri*(-1))+(rb*0);
	cout<<"\n La calificacion final es: "<<cf;
	printf("\n La calificacion final es: %d", cf);
	cf=rc*5-ri;
	cout<<"\n La calificacion final es: "<<cf;
	printf("\n La calificacion final es: %d", cf);
	return 0;
	
	
	
	
}
