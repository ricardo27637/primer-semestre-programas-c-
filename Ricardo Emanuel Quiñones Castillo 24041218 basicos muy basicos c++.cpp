#include <iostream>   //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
#include <stdio.h>
using namespace std;

int main()
{
		SetConsoleOutputCP(CP_UTF8); 
		SetConsoleCP(CP_UTF8);
		char c;
		char letras[20]="Hexadecimal";
		int i;
		float f;
		i=10;
		f=123.45;
		c='x';
		printf("impresión simple \n");//vocal y boton de coma
		printf("varchar=%c, varint=%d, varfloat=%f, cadena=%s",c,i,f,letras);		 
		
	return 0;
}
