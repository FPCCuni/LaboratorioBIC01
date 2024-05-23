#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
   int estrellas, **puntero_matriz;
   cout<<"\tMi cielo\n";
   cout<<"Ingrese un entero positivo: ";
   cin>>estrellas;
   puntero_matriz = new int*[estrellas];
   for(int i=0; i<estrellas; i++){
       puntero_matriz[i] = new int[estrellas];
    }
   for(int i=0; i<estrellas; i++){
       for(int j=0; j<estrellas; j++){
           *(*(puntero_matriz+i)+j) = rand()%+3;
           
       }
   }
   for(int i=0; i<estrellas; i++){
       for(int j=0; j<estrellas; j++){
           if(*(*(puntero_matriz+i)+j) == 0){
              cout<<"* ";
              }
           if(*(*(puntero_matriz+i)+j) == 1){
              cout<<"+ ";
              }
           if(*(*(puntero_matriz+i)+j) == 2){
              cout<<"  ";
              }
       }
       cout<<endl;
   }
   for(int i=0; i<estrellas; i++){
       delete puntero_matriz[i];
    }
   delete [] puntero_matriz;

}
