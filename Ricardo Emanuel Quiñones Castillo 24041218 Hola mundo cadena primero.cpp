#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x;
	string micadena= "Hola mundo";
	cout<<"La cadena original es: "<<micadena<<endl;
	char letral= micadena[0];
	cout <<"La primera letra es: " <<letral << endl;
	micadena[1]= 'e';
	cout<<"La cadena modificada es: "<<micadena<<endl;
	for(x=0;x<micadena.lenght();x++)
		cout<<micadena[x]<<"\n";
	return 0;
	
	
	
	
	
	
}
