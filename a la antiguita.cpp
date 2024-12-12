#include <iostream>  //Ricardo Emanuel Quiñones Castillo 24041218
#include<windows.h>
//#include<string>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	struct Estudiante {
    	char nombre[10];
    	int edad;
    	int calificaciones[3]; //Array p/calificaciones 3 materias
	};
	const int NUM_ESTUDIANTES = 3; //Número de estudiantes a almacenar
    Estudiante estudiantes[NUM_ESTUDIANTES]; //Arreglo de estructuras Estudiante
    // Ingreso de datos para cada estudiante
    for (int i=0; i<NUM_ESTUDIANTES;i++) {
        cout<<"\nIngresa los datos del estudiante #"<<i+1<<":\n";        
        cout << "Nombre: ";
        fflush(stdin);
        gets(estudiantes[i].nombre);
        cout<<"Edad: ";
        cin>>estudiantes[i].edad;
        //Ingresamos las calificaciones
        cout<<"Ingresa las calificaciones de 3 materias:\n";
        for (int j=0;j<3; j++) {
            cout<<"Calificación #"<<j+1<<": ";
            cin>>estudiantes[i].calificaciones[j];
        }
    }
    //Mostramos la información de todos los estudiantes
    cout<<"\nInformación de los estudiantes:\n";
    for (int i=0;i<NUM_ESTUDIANTES;i++){
        cout<<"\nEstudiante #"<<i+1<<":\n";
        cout<<"Nombre: "<<estudiantes[i].nombre<<"\n";
        cout<<"Edad: "<<estudiantes[i].edad<<"\n";   
        cout << "Calificaciones: ";
        for (int j=0;j<3;j++){
            cout<<estudiantes[i].calificaciones[j]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
