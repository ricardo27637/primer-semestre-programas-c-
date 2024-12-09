//que capture dos cadenas y determine si son iguales o no
#include<iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include<time.h>
#include<windows.h>
using namespace std;
int main( )
{
	int m1[10][10],m2[10][10],m3[10][10];//declara tres matrices
	int v1[10],v2[10],v3[10];//declara 3 vectores
	int i,j,n;
	
	for(i=0;i<n;i++)//Ciclo para renglones
		for(j=0;j<n;j++)//Ciclo para columnas
		{
			cout<<"Dame el valor de m1["<<i<<"]["<<j<<"]:";
			cin>>m1[i][j];
		}
		
	for(i=0;i<n;i++)//Ciclo para renglones
		for(j=0;j<n;j++)//Ciclo para columnas
		{
			cout<<"Dame el valor de m2["<<i<<"]["<<j<<"]:";
			cin>>m2[i][j];
		}
		
	if(m1[i]==m2[i])
	{
		cout<<"Iguales";
	}
	else
	{
		cout<<"NO Iguales";
	}
}
