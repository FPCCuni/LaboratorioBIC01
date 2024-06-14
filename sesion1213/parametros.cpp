//SESION 12: FUNCIONES Y PARAMETROS
#include <iostream>
using namespace std;

const int filas = 3;
const int cols = 3;
const int pags = 4;

//PASO POR VALOR
void pasoValor(int x){
    x = x + 20; // x+=20; modificamos el valor de x
    cout << "Dentro de pasovalor : " <<x <<endl;
}

//PASO POR REFERENCIA
void pasoReferencia(int &x){ //utilizar el operador & despues del tipo y antes del nombre
    x = x + 20; // modificamos el valor de a
    cout << "Dentro de pasoReferencia x: " << x << endl;
}

//PASO DE PARAMETRO TIPO ARREGLOS  
//1. Duplicar sus elementos
//2. Calcular el promedio de sus elementos
void pasoArreglo(int arr[], int tam){
    double suma = 0;
    for(int i = 0; i < tam; ++i){
        arr[i] = 2*arr[i];
        suma +=arr[i];
    }
    int prom = suma/tam;//5.5 -> prom ==5
    cout << "El promedio de los elementos del arreglo es: " << prom <<endl;

}

//PASO DE MATRICES
//1. Elevar al cuadrado cada elemento
//2. Sumar los elementos de la primera y última fila
void pasoMatriz(int matriz[][cols], int filas){
    int suma2f = 0;
    for(int i = 0; i < filas; ++i){
        for(int j = 0; j < cols; ++j){
            matriz[i][j] = matriz[i][j]*matriz[i][j];
        }
        
        if(i == 0 || i == filas-1){
            for(int j = 0; j < cols; ++j){
                suma2f += matriz[i][j];
            }
             
        }
        
    }

    cout << "La suma de f_0 y f_n-1 es" <<suma2f <<endl; 
}

//funcion imprimir arreglos
void printArray(const int a[], int n){
    for(int i = 0; i < n ; ++i){
        cout << a[i] << " "; 
    }
}

//funcion imprimir matrices
void printMatriz(int m[][cols], int filas){
	for(int i = 0; i <filas; ++i){
		for(int j = 0; j < cols) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

//Ejercicio verificar que sucede con el arreglo y con la matriz
// antes, en la función y despues de llamarla.
//¿Las matrices se pasan por valor o por referencia?

int main(){
    int a = 5;

    cout << "Antes del paso por valor a: " << a <<endl;
    
    pasoValor(a); //llamada a la funcion

    cout << "Despues de llamar a la funcion a:" << a << endl;

	cout << "\n\n";
    cout << "Antes del paso por referencia a: " << a <<endl;
    
    pasoReferencia(a); //llamada a la funcion

    cout << "Despues de llamar a la funcion a:" << a << endl;

    int arreglo[5] = {1,2,3,4,5};
    cout << "Arreglo antes de llamar a la funcion "<<endl;
    printArray(arreglo, 5);

    
    int m[filas][cols] = {1,2,3, 4,5,6, 7,8,9};




    return 0; 
}


//
//void matriz3D(int m3D[][cols][pags], int filas );