/*Escribir una función recursiva que permita
 calcular la suma de los elementos de un arreglo.
*/
#include <iostream>
using namespace std;

int arrRec(int a[], int n){

    if(n == 0){
        return 0;
    }else{
        return a[n-1] + arrRec(a, n-1);
    }

}

int main(){

    int a[5] = {1,2,3,4,5};

    int resultado  = arrRec(a,5);

    cout << "La suma es : " << resultado <<endl;

    return 0; 
}