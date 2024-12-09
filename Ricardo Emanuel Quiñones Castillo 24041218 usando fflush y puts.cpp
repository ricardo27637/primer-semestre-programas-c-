#include<windows.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include<iostream>
using namespace std;
main( )
{
	char c[11]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
	int i=0;
	puts("Captura de una cadena");
	for(i=0;i<11;i++)
	{
		printf("Dame el elemento No. %d\n ",i);
		fflush(stdin);
		c[i]=getchar();
	}
	puts("impresion de la cadena");
	for(i=0;i<11;i++)
		printf("%c",c[i]);
		system("PAUSE");
		system("CLS");
		puts("conversion a mayusculas");//cout
		for(i=0;i<11;i++)
		{
			c[i]=toupper(c[i]);
			printf("%c",c[i]);
		}
	
}
