#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x,edad;
	char nom[10];
	
	x=1;
	do
	{
		cout<<x<<"\n";
		x++;
	}while(x<10);
	system("PAUSE");
	system("CLS");
	do
	{
		system("CLS");
		gotoxy(10,10);cout<<"Menu Principal";
		gotoxy(10,11);cout<<"1.- Lee el nombre";
		gotoxy(10,12);cout<<"2.- Lee la edad";
		gotoxy(10,13);cout<<"3.- Imprime los datos";
		gotoxy(10,14);cout<<"4.- Terminar";
		gotoxy(10,15);cout<<"Selecciona una opcion <1,4> ";
		do{
			gotoxy(30,10);
			cout<<"        ";
			gotoxy(30,10);
			cin>>x;
		}while(x<0 or x>4);
		switch(x)
		{
			case 1:
					system("CLS");
					cout<<"Dame tu nombre ";
					fflush(stdin);
					gets(nom);
					break;
					
			case 2:
					system("CLS");
					cout<<"Dame tu edad ";
					cin>>edad;
					break;
					
			case 3:
					system("CLS");
					cout<<"Nombre: "<<nom<<"\n";
					cout<<"Edad: "<<edad<<"\n";
					system("PAUSE");
		}
	}while(x!=4);
	return 0;
}
