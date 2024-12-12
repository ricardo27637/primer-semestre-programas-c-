#include<stdio.h>   //Ricardo Emanuel Quiñones Castillo 24041218
#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
	int num;
	cout<<"Dime un numero para calcular el factorial: ";
	cin>>num;
	cout<<"El factorial de "<<num<<" es ";
	num=factorial(num);
	cout<<num;
	return 0;
}
int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);//recursividad
}
