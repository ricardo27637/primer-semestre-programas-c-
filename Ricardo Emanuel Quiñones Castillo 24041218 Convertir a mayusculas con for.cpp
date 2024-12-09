#include<windows.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    char cadena[10];
    int len, i;
    cout<<"Dame una palabra en minCrsculas: ";
    gets(cadena);
    len=strlen(cadena);//obtiene la longitud de la cadena
    for(i=0;i<len;i++) 
	   	cadena[i]=toupper(cadena[i]);//convierte a mayuscula cada elemento
	cout<<"ImpresiC³n de la cadena completa: "<<cadena<<"\n";
	cout<<"Impresion elemento por elemento\n";
    for(int i=0;i<len;i++) 
	   	cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
	return 0;
}
