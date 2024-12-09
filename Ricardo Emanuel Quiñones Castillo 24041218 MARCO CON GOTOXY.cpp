#include <iostream>   //Ricardo Emanuel Quiñones Castilo 24041218
#include<time.h>
#include<windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	int r,vec[10];
	srand(time(0));
	printf("Maximise la pantalla y presione una letra");
	getche();
	system("CLS");
	for(r=0;r<=220;r++)//165 78  Horizontales
	{
	gotoxy(r,0);
	printf("$");
	gotoxy(r,40);//40 18
	printf("$");
	}
	for(r=0;r<=165;r++)//verticales 165
	{
	gotoxy(0,r);//linea izquierda
	printf("&");
	gotoxy(165,r);//40 18 derecha
	printf("&");	
	}
	gotoxy(72,17);
	cout<<"Impresion del vector";
	for(r=0;r<10;r++)
	{
		vec[r]=rand()%100;
		gotoxy(40,r+3); //80, r+17
		printf("%d",vec[r]);
	}
	gotoxy(40,13); //40 13
	getche();
	return 0;
}
