#include<stdio.h>   //Ricardo Emanuel Quiñones Castillo 24041218
#include <iostream>
using namespace std;
void captura(char arreglo[]);
void imprimir(char arreglo[]);
void cifrar(char arreglo[]);
int main()
{
	char arreglo[100];
	int i;
	captura(arreglo);
	cout<<"La palabra a cifrar es: ";
	imprimir(arreglo);
	cout<<"La palabra cifrada es: ";
	cifrar(arreglo);
	imprimir(arreglo);
	cout<<"La palabra descifrada es: ";
	cifrar(arreglo);
	imprimir(arreglo);
	return 0;
}
void captura(char arreglo[])
{
	cout<<"Dame la palabra a cifrar: ";
	gets(arreglo); //si o si
}
void imprimir(char arreglo[])
{
	//puts(arreglo):
	int i;
	for(i=0;arreglo[i]!='\0';i++)
	{
	 	cout<<arreglo[i];  	
	}
	cout<<'\n';
}
void cifrar(char arreglo[])
{
	int i;
	for(i=0;arreglo[i]!='\0';i++)
	{
		switch(arreglo[i])
		{
			case'S':
				arreglo[i]='U';
				break;
			
			case'U':
				arreglo[i]='S';
				break;
				
			case'F':
				arreglo[i]='A';
				break;
				
			case'A':
				arreglo[i]='F';
				break;
			
			case'M':
				arreglo[i]='E';
				break;
				
			case'E':
				arreglo[i]='M';
				break;
				
			case'L':
				arreglo[i]='I';
				break;
				
			case'I':
				arreglo[i]='L';
				break;
				
			case'C':
				arreglo[i]='O';
				break;
				
			case'O':
				arreglo[i]='C';
				break;
		}
	}
}



















