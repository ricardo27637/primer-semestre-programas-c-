#include <iostream>   //Ricardo Emanuel Quiñones Castillo 24041218
using namespace std;
double ctof(double centi); //Centigrados  Faren
double ftoc(double fah); //Faren  a Centigrados
int main()
{
	double temperatura;
	int opcion;
	cout<<"Ingrese la temepratura: ";
	cin>>temperatura;
	cout<<"Seleccione la opcion deseada: \n";
	cout<<"1. Centigrados a Farenheit \n";
	cout<<"2. Frenheit a Centigrados \n";
	cin>>opcion;
	
	switch(opcion)
	{
		case 1:
			cout<<temperatura<<" grados centirados son "<<ctof(temperatura)<<"grados farenheit";
			break;
		case 2:
			cout<<temperatura<<" grados centirados son "<<ftoc(temperatura)<<"grados Centigrados";
			break;
	}
	return 0;
}
double ctof(double centi)
{
	return(centi*9/5)+32;
}
double ftoc(double fah)
{
	return(fah-32)*5/9;
}




