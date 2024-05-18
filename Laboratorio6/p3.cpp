/*3. Escribir un programa que almacene en un arreglo
los primeros 50 números de Fibonacci
y los muestre por pantalla en orden inverso*/

#include <iostream>
using namespace std;

int main(){
    int f[50]={0,1};

    for(int i = 2; i <50; i++){
        f[i] = f[i-1] + f[i-2];
        
    }



    return 0; 
}