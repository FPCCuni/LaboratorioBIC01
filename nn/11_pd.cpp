#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<iomanip>
#define c 100
#define art 3
using namespace std;
char** generar(char (*)[c],int);
void mostrar(char **d_a,int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<".- "<<*(d_a+i)<<endl;
    }

}
void limpiar(char**,int f);
int main(){
    char derechos[art][c]={"Todo los seres humanos nacen libres e iguales en dignidad y derechos.","Todo individuo tiene derecho a la vida, a la libertad y a la seguridad de su persona.","Nadie podra ser arbitariamente detenido, preso ni desterrado"};
    char **der;
    int item;
    cout<<setfill('.')<<setw(50)<<"Asignando el articulo de manera aleatoria."<<setfill('\0')<<endl;;
    
    cout<<"Ingrese la longitud del arreglo: ";cin>>item;
    
    der=generar(derechos,item);
    mostrar(der,item);
   limpiar(der,item);
    
    
    cout<<endl;
    return 0;
}

void limpiar(char **d_a,int f){
    for(int i=0;i<f;i++){
        delete d_a[i];
    }
    delete d_a;
}
char** generar(char (*d_a)[c],int item){
    char **d_c;
    int k;
    d_c=new char *[item];
    for(int i=0;i<item;i++){
        d_c[i]=new char [c];
    }
    srand(time(NULL));
    for(int i=0;i<item;i++){
        k=rand()%art;
        strcpy(*(d_c+i),d_a[k]);
    }
    
    return d_c;
}