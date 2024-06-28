/*
Implemente un programa que busque una subcadena 
dentro de una cadena con las siguientes restricciones
- Utilice funciones en su implementación
- Utilice arreglo de caracteres
- Utilice búsqueda lineal

Ejemplo: Hola mundo
mundo
salida: subcadena encontrada en la posicion 5

*/ 
#include <iostream>
#include <cstring> //para strlen()
using namespace std;


//Función buscar subcadena
int buscaSubcadena(char cadena[], char subcadena[]){
	int lcad = strlen(cadena);
	int lsubcad = strlen(subcadena);
	for(int i = 0; i <lcad; ++i){
		int j;
		for(j = 0; j < lsubcad; ++j){
			if(cadena[i+j] != subcadena[j]){
				break;
			}
		}
		
		if(j == lsubcad){
			return i;
		}
	}
	
	return -1;
	
}


int main(){
	char cadena[50], subcadena[50];
	
	cout << "Ingrese la cadena: ";
	cin.getline(cadena,50);
	
	cout << "Ingrese la subcadena: ";
	cin.getline(subcadena,50);
	
	int resp = buscaSubcadena(cadena, subcadena);
	
	if(resp != -1){
		cout << "subcadena encontrada en la posición " << resp << endl;
	}else{
		cout << "Subcadena no encontrada" <<endl;
	}
	
	
	
	
	
	return 0;
}

/*
Variante 1
utilice la función en  <cstring> que permite encontrar subcadenas

Variante 2
Utilice la libreria <string>
*/
