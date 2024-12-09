#include <iostream>         //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int Pg,Pe,PP,tres,uno,cero,TOTP,TOTPU,PO,ri;
	char Ne[80];
	float PO2;

	fflush(stdin);	
	cout<<"Dame el nombre del equipo: ";
	cin>>Ne;
	
	fflush(stdin);
	cout<<"Dame el numero de partidos ganados: ";
	cin>>Pg;
	
	fflush(stdin);
	cout<<"Dame el numero de partidos empatados: ";
	cin>>Pe;
	
	fflush(stdin);
	cout<<"Dame el numero de partidos perdidos: ";
	cin>>PP;
	  
	
	tres=Pg*3;
	uno=Pe*1;
	TOTP=Pg+Pe+PP;
	TOTPU=TOTP*3;
	PO=tres+uno;
	PO2=(PO*100)/TOTPU;
	//5*100/15
	//7*100/45 
	
	cout<<"El total de partidos es: "<<TOTP<<"\n";
	cout<<"El nombre del equipo es: "<<Ne<<"\n";
	cout<<"Total de puntos jugados: "<<TOTPU<<"\n";
	cout<<"Total de puntos obtenidos: "<<PO<<"\n";
	
	cout<<fixed;
	cout.precision(2);
	//cout<<"Total de puntos obtenidos: "<<PO2;
	
	
	printf("Total de puntos obtenidos %: %7.2f",PO2);
	return 0;
}
