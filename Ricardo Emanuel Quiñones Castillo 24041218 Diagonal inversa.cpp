#include<iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include<time.h>
#include<windows.h>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int matriz[10][10],diags[2][10]; //matriz 10x10
	int i,j,n;
	srand(time(0));  
	do{
		cout<<"Dime cuantos elementos por lado tiene la matriz? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)//renglones
		for(j=0;j<n;j++)//columnas
			matriz[i][j]=rand()%100;
	cout<<"Impresion de la matriz\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%3d",matriz[i][j]);
		cout<<"\n";
	}
	cout<<"Impresion en diagonal\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				printf("%3d",matriz[i][j]);
			else
				printf("   ");
		}
		cout<<"\n";
		   
	
	}
	return 0;
}
