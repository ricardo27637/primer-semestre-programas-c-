#include <stdio.h>   //Ricardo Emanuel Quiñones Castilo 24041218
#include <conio.h>
#include <iostream>
using namespace std;
main()
{
	int entera;
	float flotante;
	char letra,palabra[50];
	cout<<"lectura de datos usando scanf\n";
	cout<<"dame un valor entero:";
		fflush(stdin);
	scanf("%d",&entera);
	cout<<"dame un valor flotante:";
		fflush(stdin);
	scanf("%f",&flotante);
	cout<<"dame un valor char:";
		fflush(stdin);
	scanf("%c",&letra);
	cout<<"dame una cadena sin espacios:";
		fflush(stdin);
	scanf("%s",palabra);
	puts("impresion de valores:\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	system("pause");
	cout<<"dame un entero,unflotante,un char y una cadena sin espacios: ";
		fflush(stdin);
	scanf("%d %f %c %s",&entera,&flotante,&letra,palabra);
	puts("impresion de los valores\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	cout<<fixed;
	cout.precision(4);
	cout<<"impresion con presicion. El valor flotante a 4 decimales: "<<flotante;
	return 0;
	
		
		
		
		
		
		
		
}
