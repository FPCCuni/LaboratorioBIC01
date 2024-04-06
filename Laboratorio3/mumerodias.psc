Algoritmo numeroDias
	
	Definir nMes Como Entero;
	
	Escribir "Ingrese un numero ";
	
	Leer nMes;
	
	Segun nMes Hacer
		2:
			Escribir "Tiene 28 dias";
		4,6,9,11:
			Escribir "Tiene 30 dias";
		1,3,5,7,8,12:
			Escribir "Tiene 31 dias";
		De Otro Modo:
			Escribir "debe estar entre 1 y 12";
	Fin Segun
	
FinAlgoritmo
