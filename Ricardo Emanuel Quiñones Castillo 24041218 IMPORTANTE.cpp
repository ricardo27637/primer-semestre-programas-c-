//determine si un numero es primo divisible entre el mismo y el uno que sea mayor que 1 
#include<windows.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include<iostream>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int n,x;
	
	do
	{
		cout<<"Dame un numero mayor que 1: ";
		cin>>n;
	}while(n<2)
	for(x=2;x<n;x++)
	{
		if(n%x==0)
	}
