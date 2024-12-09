#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
using namespace std;
int main()
{
	float numerador, denominador;
	cout<<"Dame el numerador (dividendo): ";
	cin>>numerador;
	cout<<"Dame el denominador (dividendo): ";
	cin>>denominador; 
	
	if(denominador)
	{
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	}
	else
	{
		cout<<"La divicion sobre ceron no se permite: ";	
	}
	
	system("pause");
	//preguntando si es 0 de manera explicita
	if(denominador!=0)
	{
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";	
	}
	else
	{
		cout<<"La divicion sobre ceron no se permite: ";	
	}
	
	system("pause");
	//preguntando por la negacion de un valor diferente de 0
	if(!denominador)
	{
		cout<<"La divicion sobre cero no se permite: ";	
	}
	else
	{
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";	
	}
	
	
	return 0;
	
	
	
	
	
}
