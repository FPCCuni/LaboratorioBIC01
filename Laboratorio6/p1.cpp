/*1. Escribir un programa que pida al usuario 5 números
reales y luego los muestre en el orden contrario al que
se introdujeron*/
#include <iostream>
using namespace std;
#define N 5

int main(){
    double a[N];

    //Ingresamos los números
    cout << "ingrese 5 numeros reales: "<<endl;
    for(int i = 0; i < N; ++i){
        cout << "Ingrese el " << i+1 << "° numero: ";
        cin >> a[i]; 
    }

    //Mostramos en orden inverso
    for(int i = 0; i < N; ++i){
        cout << a[N-1-i] << " ";
    }

    



    return 0; 
}