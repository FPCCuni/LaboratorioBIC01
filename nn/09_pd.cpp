#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int** generar(int,int);
void mostrar(int **,int,int);
int** transponer(int **,int,int);
void liberar(int **,int);


int main(){
    int **d_a,**d_t,f,c;
    cout<<"Ingrese el numero de filas: ";cin>>f;
    cout<<"Ingrese el numero de columnas: ";cin>>c;
    d_a=generar(f,c);
    cout<<"Esta es la matriz aleatoria: "<<endl;
    mostrar(d_a,f,c);
    d_t=transponer(d_a,f,c);
    cout<<"Esta es su matriz transpuesta: "<<endl;
    mostrar(d_t,c,f);
    liberar(d_t,c);
    liberar(d_a,f);
    cout<<endl;
    return 0;
}

int** transponer(int **d_a,int f,int c){
    int **transpuesta;
    transpuesta=generar(c,f);
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            *(*(transpuesta+j)+i)=*(*(d_a+i)+j);
        }
    }
    return transpuesta;
    liberar(transpuesta,c);
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
            *(*(d_a+i)+j)=rand()%(10);
        }
    }
    return d_a;
        
}