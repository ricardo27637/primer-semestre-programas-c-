#include<math.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <iostream>
using namespace std;
int main()
{
	float exponente, numero, resultado;
	
	cout<<"Dame el valor del numero: ";
	cin>>numero;
	cout<<"Dame el valor del exponente: ";
	cin>>exponente;
	
	if(exponente==0)
	
	resultado=1;   
	
	else
	
		if(exponente>0)
		resultado=pow(numero,exponente); //es la potencia
	
	else
	
		resultado=1/pow(numero,abs(exponente)); //es la potencia
	
	
	printf("El resultado es: %5,5f\n", resultado);
	cout<<"El resultado es: "<<resultado;
	
}
