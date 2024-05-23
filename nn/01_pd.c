/* 1.c */

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    bool salida=true;
	int *ptr,i=0,tam=1,aux=0,val,cont=0;
	ptr =  new int[tam];		

	do{	
	    cout<<"Ingrese enteros, termina con -1: "; 
		cin >> val;
		if(val>0){
		    cont=cont+1;
		    if( (i+1) > tam)
				ptr = (int*)realloc(ptr, (tam=tam* 2) * sizeof(int));
				if(ptr == NULL) {printf(" No hay espacio suficiente.\n"); exit(EXIT_FAILURE);}
			ptr[i] = val;
			i++;
		}else salida=false;
		
	}while (salida);
	for(i = 0; i < cont; i++){
		cout << "val " << i <<": "<< ptr[i] << endl;		
	}
	delete [] ptr;
	return 0; 
}
