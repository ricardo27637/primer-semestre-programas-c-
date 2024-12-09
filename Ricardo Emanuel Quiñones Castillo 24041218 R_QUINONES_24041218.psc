Proceso R_QUINONES_24041218  Ricardo Emanuel Quinones Castilo 24041218
	
	Definir ganados, empatados, perdidos,totalP,totpuntos,maxp1,puntua1,puntua2 Como Entero;
	Definir nombreE Como Caracter;
	Definir porc1 Como Real;
	//empatado1 ganado3
	Escribir "imgrese el nombre del equipo de futbol";
	Leer nombreE;
	
	Escribir "imgrese el numero de partidos ganados";
	Leer ganados;
	Escribir "imgrese el numero de partidos empatados";
	Leer empatados;
	Escribir "imgrese el numero de partidos perdidos";
	Leer perdidos;
	
	totalP<-ganados+empatados+perdidos;
	totpuntos<-ganados+empatados;
	maxp1<-(ganados*3)+(empatados*1);
	puntua1<-ganados*3;
	puntua2<-puntua1+empatados;
	porc1<-(maxp1*totalP)/(totalP*2);
	
	Escribir "el nombre del equipo es: ",nombreE;
	Escribir "partidos ganados: ",ganados;
	Escribir "partidos empatados ",empatados;
	Escribir "partidos perdidos ",perdidos;
	
	Escribir "total de partidos jugados ",totalP;
	Escribir "total de puntos obtenidos ",maxp1;
	Escribir "porcentaje de puntos obtenidos ",redon(porc1);
	//Escribir "porcentaje de puntos obtenidos ",porc1;
	
	
	
	
FinProceso
