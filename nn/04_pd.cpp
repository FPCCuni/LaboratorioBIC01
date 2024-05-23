#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int n=20;
  char *a=new char[n];
  cout<<"INGRESE LA CADENA DE CARACTERES:"<<endl;
  cin.getline(a,20);
  cout<<"cadena :"<<endl;
  for(int i=0;i<strlen(a);i++){
    cout<<*(a+i);}
  cout<<endl;
  cout<<"longitud :"<<strlen(a)<<endl;
  delete[] a;
  return 0;
}

