/*Escribir un programa que sume los 20 primeros números pares*/

#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int suma_total = 0;

    do{
        suma_total += 2*i; // suma_total = suma_total + 2*i;
        i++;
    }while(i <= 19);

    cout << "La suma de los 20 primeros pares es: " << suma_total <<endl;

    return 0; 
}
