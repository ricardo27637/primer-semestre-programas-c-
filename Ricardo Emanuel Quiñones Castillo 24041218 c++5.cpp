#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
#include <stdio.h>
//#include <stdlib.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cad[80];
	int i,j,k;
	
	
	puts("usando scanf con juegos de impresion \n");
	puts("dame una cadena con espacios \n");
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("Dame una cadena de mayusculas y espacios \n");
	scanf("%[ A-ZÑn]",cad);
	puts(cad);
	puts("Dame una cadena de mayusculas, Minusculas y espacios \n");
	fflush(stdin);
	scanf("%[ a-zA-ZÑn]",cad);
	cout<<cad<<"\n";
	puts("Dame una cadena con cualquier caracter y termina con un entero \n");
	fflush(stdin);
	scanf("%[^\n]",cad);
	puts(cad);
	
	puts("Dame 3 numeros enteros de maximo 3 cifras");
	scanf("%3d %3d %3d",&i,&j,&k);
	printf("%d %d %d",i,j,k); //1 2 3 
	 
	
	
	return 0;
}
