Proceso sin_titulo Ricardo Emanuel Quiñones Castilo 24041218
	
	Definir c1,c2,c3, efinal, trabajofinal Como Entero;
	Definir promediofinal,promedio Como Real;
	
	Escribir "dame la calificacion 1 ";
	Leer c1;
	Escribir "dame la calificacion 2 ";
	Leer c2;
	Escribir "dame la calificacion 3 ";
	Leer c3;
	Escribir "dame la calificacion del examen final ";
	Leer efinal;
	Escribir "dame la calificacion del trabajo final ";
	Leer trabajofinal;
	
	promedio<-(c1+c2+c3)/3;
	Escribir "el promedio de las 3 calificaciones es: ",promedio;
	promediofinal<-(promedio*.55)+(efinal*.3)+(trabajofinal*.15);
	Escribir "la calificacion final de fundamentos de programacion es ",redon(promediofinal);
	
	
	
	
	
	
FinProceso
