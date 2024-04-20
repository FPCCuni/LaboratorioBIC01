/*Escribir un programa que pida al usuario que ingrese un
 número entero y luego muestre los números de la serie de
Fibonacci menores o iguales que el número ingresado
Serie deFibonacci: 0,1,1,2,3,5,8,13,.....
Ejemplo:
INPUT: 6 OUTPUT: 0,1,1,2,3,5
INPUT: 1 OUTPUT: 0,1,1
*/
#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int n;

    cout << "Ingrese un número entero: ";
    cin >> n;

    if(n < 0){
        cout << "Error el numero debe ser no negativo";
        return 1;
    }

    if(n==0){
        cout << a <<endl;
        return 1;
    }

    cout << a <<endl;

    do{
        cout << b <<endl;

        int act = a + b;
        a = b;
        b = act;

    }while(b <= n);

    return 0; 
}
