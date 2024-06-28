/*
Implemente un programa que busque una subcadena 
dentro de una cadena con las siguientes restricciones
- Utilice funciones en su implementación
- Utilice arreglo de caracteres
- Utilice búsqueda lineal

Ejemplo: 
ENTRADA:
Hola mundo
mundo

SALIDA: subcadena encontrada en la posicion 5

*/ 
#include <iostream>
#include <cstring> //strlen()

using namespace std;


//Función buscar subcadena
int buscaSubcadena(char cadena[], char subcadena[]){
	//usando strstr()
	char * psub = strstr(cadena, subcadena);
	if(psub != 0){
		return psub - cadena;
	}else{
		return -1;
	}
}



int main(){
	
	char cadena[50], subcadena[50];
	
	cout << "Ingrese la cadena: ";
	cin.getline(cadena,50);
	
	cout << "Ingrese la subcadena: ";
	cin.getline(subcadena,50);
	
	int resp = buscaSubcadena(cadena,subcadena);
	
	if(resp != -1){
		cout << "La subcadena se encuentra en la posicion: " << resp <<endl;
		
	}else{
		cout << "La subcadena no se encuentra en la cadena";
	}
	 

	
	
	
	
	
	return 0;
}

/*
Variante 1
utilice la función en  <cstring> que permite encontrar subcadenas

Variante 2
Utilice la libreria <string>
*/
	

