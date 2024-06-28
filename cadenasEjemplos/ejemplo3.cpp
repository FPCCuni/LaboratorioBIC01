/*
USANDO STRING
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
#include <string>
//#include <cstring> //para strlen()
using namespace std;


//Función buscar subcadena
int buscaSubcadena(string cadena, string subcadena){
	int lcad = cadena.length();
	int lsubcad = subcadena.length();
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
	string cadena, subcadena;
	
	cout << "Ingrese la cadena: ";
	getline(cin,cadena); //cin.getline(cadena,50);
	
	cout << "Ingrese la subcadena: ";
	getline(cin,subcadena);//cin.getline(subcadena,50);
	
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
