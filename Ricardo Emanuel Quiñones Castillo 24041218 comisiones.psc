Proceso comisiones  Ricardo Emanuel Quiñones Castilo 24041218
	Definir v1,v2,v3,c1,c2,c3,sueldo,total,totalc Como Real;
	
	Escribir "dime el sueldo";
	Leer sueldo;

	Escribir "dime la venta 1";
	Leer v1;
	Escribir "dime la venta 2";
	Leer v2;
	Escribir "dime la venta 3";
	Leer v3;
	
	c1<-v1*0.1;
	c2<-v2*0.1;
	c3<-v3*0.1;
	totalc<-c1+c2+c3;
	total<-sueldo+totalc;
	
	Escribir "el total de comiciones es ", totalc;
	Escribir "sueldo total es ",total;
FinProceso
