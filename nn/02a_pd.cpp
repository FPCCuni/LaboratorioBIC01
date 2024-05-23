#include <iostream>
using namespace std;
void redimensionar(int n, int *p);

int main(){
	int matriz[4][3]={{12,20,15},{15,11,13},{17,19,10},{15,16,19}}, *p;
	p=new int[4];
	for(int i=0; i<4; i++){
		int max=0, sum=0;
		p=matriz[i];
		for(int j=0; j<3; j++){
			sum= sum + p[j];
			if(p[j]>=max){
				max=p[j];
			}
		}
		redimensionar(3, p);
		int *aux=new int[5];
		aux[3]=(sum+1)/3, aux[4]=max;
		for(int j=3; j<5; j++){
			cout << aux[j] << " ";
		}
		cout << endl;
	}
	delete[] p;
	delete[] aux;
	return 0;	
}
void redimensionar(int n, int *p){
	n+=2;
	int *aux= new int[n];
	for(int i=0; i<n-2; i++){
		aux[i]=p[i];
		cout << aux[i] << " ";
	}
	p=aux;
}
