Algoritmo horas_minutos
	Definir totalMinutos, horas, minutos Como Entero;
	Escribir "Ingrese la cantidad de minutos";
	Leer totalMinutos;
	
	horas <- TRUNC(totalMinutos/60);
	
	minutos <- totalMinutos % 60;
	
	Escribir "Hay ", horas, " hora(s) y ", minutos, " minuto(s)";
FinAlgoritmo
