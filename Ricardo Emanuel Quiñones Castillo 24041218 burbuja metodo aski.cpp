#include<iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include<time.h>
#include<windows.h>
using namespace std;
int main( )
{
	char tempo,vector[11];
	int i,j,n,random;
	srand(time(0));
	do
	{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2); 
	for(i=0;i<n;i++)
	{
		random=65; //tabla aski
		do
		{
			random=rand()%91;
		}while(random<65);
		vector[i]=random;
		cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	}
	vector[n]='\0';
	for(i=0;i<n;i++) //metodo de la burbuja
	{
		for(j=i+1;j<n;j++)
		{
			if(vector[i]>vector[j])
			{
				tempo=vector[j];
				vector[j]=vector[i];
				vector[i]=tempo;
			}
		}
	}
	cout<<"Vector hasta el terminador\n";
	i=0;
	do
	{
		cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
		i++;
	}while(vector[i]!='\0');
	cout<<"Vector completo\n";
	for(i=0;i<11;i++)
		cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
			cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
}
