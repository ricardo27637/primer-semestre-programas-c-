#include<iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include<time.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int main( )
{
		SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char cad1[10],cad2[10];
	string pal1,pal2;
	int fin1,fin2,diferentes,i=-1;
	fin1=1; fin2=1;
	
	cout<<"Dame una cadena: "; cin>>pal1;
	cout<<"Dame otra cadena: "; cin>>pal2;
	
	if(pal1==pal2)
	cout<<"Son iguales\n";
	else
	cout<<"Son diferentes\n";
	
	system("PAUSE"); system("CLS");
	cout<<"Dame una cadena y termina con enter: ";
	i=-1;
	do{
		i++;
		fflush(stdin);
		cad1[i]=getche(); //captura de inmediato, leer letra por letra
	}while(cad1[i]!='\r');
	cad1[i]='\0';
	fin1=i;
	cout<<"\n\nDame otra cadena y termina con enter: ";
	gets(cad2);
	fin2=strlen(cad2);//longitud de la cadena 
	
	if(fin1!=fin2)
		cout<<"\n\n\nSon diferentes";
		else
		{
			diferentes=0;
			for(i=0;cad1[i]!='\0';i++)
			{
				if(cad1[i]!=cad2[i])
				{
					diferentes=1;
					break;
				}
			}
			if(diferentes==1)
			cout<<"\n\n\n\nCadenas son diferentes\n";
			else
			cout<<"\n\n\n\nCadenas son iguales\n";
		}
	
	
	
	
	
	
	
	
	
	
}
