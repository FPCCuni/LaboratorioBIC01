/* Programa de ejemplo de asignación de memoria dinámica C ++ */

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *val, *rows, *cols;
	int maxr, maxc, i, j;
	cout<<"ingrese la dimension del arreglo (fila columna): ";
	cin>>maxr>>maxc;
	val = new int[maxr * maxc];
	rows = new int[maxr];
	cols = new int[maxc];

	for(i=0; i<maxr; i++)
	{
		cout<<"\nIngrese los elementos para la fila("<<i+1<<") : ";
		rows[i] = 0;
		for(j=0; j<maxc; j++)
		{
			cin>>val[i*maxc + j];
			rows[i] = rows[i] + val[i*maxc + j];
		}
	}

	for(j=0; j<maxc; j++)
	{
		cols[j] = 0;
		for(i=0; i<maxr; i++)
		{
			cols[j] = cols[j] + val[i*maxc + j];
		}
	}

	cout<<"\nLa matriz dada en dos dimensiones (junto con suma por fila y suma por columna) es :\n";
	for(i=0; i<maxr; i++)
	{
		for(j=0; j<maxc; j++)
		{
			cout<<val[i*maxc + j]<<"\t";
		}
		cout<<rows[i]<<"\n";
	}

	for(j=0; j<maxc; j++)
	{
		cout<<cols[j]<<"\t";
	}
	cout<<"\n";

	cin.get();
    delete[]rows;     // deasignando el arreglo rows
	delete[]cols;     // deasignando el arreglo cols
	delete[]val;     //  deasignando el arreglo val
	return 0;
}
