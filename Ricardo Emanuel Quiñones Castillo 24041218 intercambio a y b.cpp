#include <iostream>   //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int a,b,c;
	cout<<"Dame el valor de a: ";
	cin>>a;
	cout<<"Dame el valor de b: ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"a= "<<a<<" b= "<<b;
}
