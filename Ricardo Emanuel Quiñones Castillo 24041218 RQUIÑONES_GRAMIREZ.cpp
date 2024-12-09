#include <windows.h> //Ricardo Emanuel Quiñones Castilo 24041218  Geovanni Joel 24041219
#include <iostream>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n,num,x,z=3,p,l;
	string o;
    // Pedir al usuario un número mayor que 1
		cout << z << " Es primo, quieres generar otro (s/n)? ";
        cin >> o;
        
    if(o=="s")
    {   
    do {
        //cout << "Dame un número mayor que 1: ";
        
        
		p=z+2;
		n=p;
        
		
		
        for (x = 2; x < p; x++) {
            if (p % x == 0) {
                break; // Si 'num' es divisible por 'x', no es primo
            }
        }

        // Si el ciclo llegó al final, 'num' es primo
        if (x == p) 
        l=p+2;
        p=p;
            cout << p << " Es primo, quieres generar otro (s/n)? ";
        	cin>>o;
        	
	
		   
	}while(o=="s" and x>2);
	}
	return 0;
}
    
