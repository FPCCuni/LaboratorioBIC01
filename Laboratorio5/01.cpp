/*Escribir un programa que imprima números de 1 al 100.
Reescriba una versión para imprimir números desde 100 a 1*/
#include <iostream>
using namespace std;

int main(){
    int i = 1;

    do{
        cout << 101- i <<endl;
        i++; //equivalente: i = i + 1;
    }while(i <=100);

    return 0; 
}