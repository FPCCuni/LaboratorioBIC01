/*
#include <iostream>
using namespace std;

int main(){
	 
	//ASCII
	char saludo1[5] = {'H', 'o', 'l', 'a','\0'};
	 
	char saludo2[5] = {72, 'o',108,'a',0};

	cout << saludo1 <<endl;
	cout << saludo2 << endl;
	
}
*/
	
/*	
#include <iostream>
using namespace std;

int main(){
	 
	
	for (int i = 0; i < 127; ++i){
		cout <<"A " << i << " le corresponde " << (char)i <<endl;

	}
}
*/


/*
#include <iostream>
using namespace std;

int main(){


	unsigned char ch1 = 125, ch2 = 10;
	ch1 = ch1 + ch2;
	
	cout <<(int)ch1 <<endl; // 135    
	
	cout << (char)(ch1-ch2-4) <<endl;
		
		return 0;
}
*/


	
	
	
/*	
	
	#include <iostream>
	#include <cstdlib> //rand() srand()
	#include <ctime> //time()
	
	using namespace std;
	
	int main(){
		char cadena[21];
		int cont;
		
		srand(time(0));
		for(int i = 0; i <20; ++i){
			int n = rand() % 26 + 65; //A->65 Z->90
			cadena[i] = n;
		}
		cout << cadena << endl;
		
		int k;
		
		for(int j = 65; j <91; ++j){
			cont = 0;
			
			for(k = 0; k<20;++k){
				if(cadena[k] == j){
					cont++;
				}
			}
			if(cont>0){
				cout << "Hay " << cont << " " << (char)j <<endl;
			}
		}
		
	}
	
*/	

	
	
	#include<iostream>
	using namespace std;
	
	int main(){
		char lista_estud[15][20];
		
		char nombres[4][10] ={"Sergio", "Patrick", "Rottger", "Roy"};
		
		for(int i = 0; i < 4; ++i){
			cout << "Ingrese los nombres del alumno " << i+1 << ": ";//cin.getline(nombres[i],10);
			cin.getline(lista_estud[i],20);//cin >>lista_estud[i];
		}
		
		for(int i = 0; i < 4; ++i){
			cout <<lista_estud[i] <<endl;; // nombres[i];
		}
		
		
	}
	
	

