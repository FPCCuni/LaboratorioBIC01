Algoritmo factorial
	Definir n,i, fact Como Entero;
	
	Escribir "Ingrese el numero";
	Leer n;
	
	fact <- 1;
	
	Para i<-1 Hasta n Con Paso 1 Hacer
		fact = fact*i
	Fin Para
	
	Escribir "EL factorial es ", fact;
	
FinAlgoritmo
