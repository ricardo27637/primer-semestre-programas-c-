#include <iostream>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int uno, dos, tres, mayor;
	char nombre[20];
	gotoxy(25,2);
	cout<<"INSTITUTO TECNOLOGICO DE DURANGO";
	gotoxy(28,3);
	cout<<"FUNDAMENTOS DE PROGRAMACION";
	gotoxy(14,4);
	cout<<"programa que determina el numero mayor de 3";
	
	gotoxy(10,5); cout<<"dime tu nombre: "; gets(nombre);
	gotoxy(10,6); cout<<"dime el primer numero: "; cin>>uno;
	gotoxy(10,7); cout<<"dime el segundo numero: "; cin>>dos;
	gotoxy(10,8); cout<<"dime el tercer numero: "; cin>>tres;
	
	if(uno>dos && uno>tres)
	{
		mayor=uno;
	}
	else
	{
		if(dos>uno && dos>tres)
		{
			mayor=dos;
		}
		else
		{
			mayor=tres;
		}
	}
	gotoxy(10,10);
	cout<<nombre<<" el mayor de los tres numeros es: "<<mayor;
	return 0;
	
	
}
