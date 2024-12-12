#include<stdio.h>   //Ricardo Emanuel Quiñones Castillo 24041218
#include <iostream>
using namespace std;
int funcionfactorial(int n);
int main()
{
	int num,resultado;
	cout<<"Ingrese un numero para calcular el factorial: ";
	cin>>num;
	num=funcionfactorial(num);  
	cout<<"="<<num;
	return 0;
	
}
int funcionfactorial(int n)
{
	int x;
	cout<<n;
	for(x=n-1;x>=1;x--)
	{
		cout<<"X"<<x;
		n=n*x;
	}
	return n;
}
