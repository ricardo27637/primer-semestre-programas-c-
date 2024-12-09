#include <windows.h>  //Ricardo Emanuel Quiñones Castilo 24041218
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x=1;
	string clave;
	for(;x<4;x++)
	{
		printf("Dame tu password (intento #%d) ",x);
		getline(cin,clave); //capturar un string con espacios
		if(clave=="soloyose")
		break;
	}
	if(x==4)
	{
		puts("\ausuario no autorizado");
	}
	else
	{
		printf("bienvenido al intento #%d",x);
	}
	return 0;
}
