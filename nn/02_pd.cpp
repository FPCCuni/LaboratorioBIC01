#include<iostream>
#include<iomanip>

using namespace std;

int** generar(int,int);
void mostrar(int **,int,int);
int **reasignar(int**d_a,int f,int c,int c1);
void liberar(int **,int);

int mayor(int **d_a,int f,int c){
    int may=0;
    
    
    for(int i=0;i<c;i++){
        if(may<*(*(d_a+f)+i)){
            may=*(*(d_a+f)+i);

        }
    }
    return may;
    
}

int prom(int **d_a,int f,int c){
    int dato=0;
    for(int i=0;i<c;i++){
        dato+=*(*(d_a+f)+i);
    }
    return dato/3;
}

int **reasignar(int**d_a,int f,int c,int c1){
    int **d_r;
    d_r=new int *[f];
    for(int i=0;i<f;i++){
        d_r[i]=new int [c];
    }
    for(int i=0;i<f;i++){
        for(int j=0;j<c1;j++){
            *(*(d_r+i)+j)=*(*(d_a+i)+j);
        }
    }
   
    return d_r;
}
void liberar(int **d_a,int f){
      for(int i=0;i<f;i++){
        delete d_a[i];
       }
    delete d_a;
}

void mostrar(int **d_a,int f,int c){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<*(*(d_a+i)+j)<<"\t";
        }
        cout<<endl;
    }

}

int** generar(int f,int c){
    int **d_a;
    d_a=new int *[f];
    for(int i=0;i<f;i++){
        d_a[i]=new int [c];
    }
    srand(time(NULL));
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            *(*(d_a+i)+j)=rand()%(21);
        }
    }
    return d_a;
        
}

int main(){
    int **d_a,**d_b,f=4,c=3;
    d_a=generar(f,c);
    cout<<"Se generara notas : "<<endl;
    mostrar(d_a,f,c);
    d_b=reasignar(d_a,f,c+2,c);
    liberar(d_a,f);
    for(int i=0;i<f;i++){
        *(*(d_b+i)+3)=prom(d_b,i,c);
    }
    for(int i=0;i<f;i++){
        *(*(d_b+i)+4)=mayor(d_b,i,c);
    }
    
    cout<<"Se busca el promedio y el maximo:"<<endl;
    cout<<"Notas:"<<setw(24)<<"Promedio  "<<"Mayor "<<endl;
    mostrar(d_b,f,c+2);
    liberar(d_b,f);
    
    cout<<endl;
    return 0;
}

