/* Asignación dinámica en C++  */

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int *rollno;    // declara un puntero integer
float *marks;   // declara un puntero float 

int main()
{
	int size, i;
	cout<<"Cuantos elementos asignamos para el arreglo? ";
	cin>>size;
	rollno = new int[size]; 	    // asignación dinámica del arreglo rollno
	marks = new float[size];        // asignación dinámica del arreglo marks 

	// chequea primero si la memoria está disponible o no
	if((!rollno) || (!marks))       // si rollno o marks es un puntero null 
	{
		cout<<"Fuera de Memoria..!!..Abortar..!!\n";
		cout<<"Presionar cualquier tecla para salir..";
		cin.get();
		exit(1);
	}

	// leer valores de los elementos de los arreglos
	for(i=0; i<size; i++)
	{
		cout<<"Ingrese código y puntaje por estudiante "<<(i+1)<<"\n";
		cin>>rollno[i]>>marks[i];
	}

	// ahora displaya los contenidos de los arreglos
	cout<<"\nRollNo\t\tMarks\n";
	for(i=0; i<size; i++)
	{
		cout<<rollno[i]<<"\t\t"<<marks[i]<<"\n";
	}

	delete[]rollno;    // deasignando el arreglo rollno
	delete[]marks;     // deasignando el arreglo marks

	cin.get();
	return 0;
}
