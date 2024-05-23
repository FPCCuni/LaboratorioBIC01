#include <iostream>
using namespace std;
void redimensionar(int n, int *nn);

int main(){
	int n=1, ent;
	int *nn =new int[n];
	while(1){
		cout << "Ingrese enteros, temina con -1: "; cin >> ent;
		if(ent==-1){
			break;
		}
		n++;
		nn[n-1]=ent;
		if(n%2==0){
			redimensionar(n, nn);
		}
	}
	for(int i=1; i<n; i++){
		cout << "val " << i-1 << ": " << nn[i] << endl;
	}
    delete[] nn;	
    return 0;	
}
void redimensionar(int n, int *nn){
	int *aux=new int[n];
	for(int i=0; i<n; i++){
		aux[i]=nn[i];
	}
	nn=aux; 
}
