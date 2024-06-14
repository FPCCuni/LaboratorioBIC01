/*Escribir una función recursiva
que permita calcular la suma de los
n primeros números naturales.
*/
#include <iostream>
using namespace std;

int sumaRec(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sumaRec(n-1);
    }
}

int main(){
    int n = 5;

    int resultado = sumaRec(n);

    cout << "La suma es: " << resultado <<endl;

    return 0; 
}