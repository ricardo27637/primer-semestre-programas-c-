#include <windows.h> //pida un numero por teclado y en un ciclo otro si le atina mensaje le atino al precio
#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218

using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int vector[1000];
	int i;
	
	for(i=0;i<10;i++)
	vector[i]=i*2;
	
	for(i=0;i<10;i++)
	cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	vector[0]=100;
	vector[1]=200; //vector en la posicion 2 es igual a 200
	vector[2]=300;
	cout<<vector[0]<<endl;
	cout<<vector[1]<<"\n";
	cout<<vector[2];
	return 0;
}
