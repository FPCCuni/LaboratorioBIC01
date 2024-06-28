/*Búsqueda de cadenas:
Implementa un programa que busque una subcadena
dentro de una cadena utilizando la búsqueda lineal.
*/

#include <iostream>
#include <cstring>

using namespace std;

// Función para buscar una subcadena dentro de una cadena
int buscarSubcadena(const char* cadena, const char* subcadena) {
    int n = strlen(cadena);
    int m = strlen(subcadena);
    
    // Recorrer la cadena principal
    for (int i = 0; i <= n - m; i++) {
        int j;
        
        // Verificar si la subcadena coincide
        for (j = 0; j < m; j++) {
            if (cadena[i + j] != subcadena[j]) {
                break;
            }
        }
        
        // Si la subcadena coincide, devolver la posición inicial
        if (j == m) {
            return i;
        }
    }
    
    // Si no se encuentra la subcadena, devolver -1
    return -1;
}

int main() {
    char cadena[100], subcadena[100];
    
    // Leer la cadena principal
    cout << "Ingrese la cadena principal: ";
    cin.getline(cadena, 100);
    
    // Leer la subcadena a buscar
    cout << "Ingrese la subcadena a buscar: ";
    cin.getline(subcadena, 100);
    
    // Buscar la subcadena
    int resultado = buscarSubcadena(cadena, subcadena);
    
    // Mostrar el resultado
    if (resultado != -1) {
        cout << "Subcadena encontrada en la posición: " << resultado << endl;
    } else {
        cout << "Subcadena no encontrada." << endl;
    }
    
    return 0;
}


/* stilo C con funcion strstr
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char cadena[100], subcadena[100];
    
    // Leer la cadena principal
    cout << "Ingrese la cadena principal: ";
    cin.getline(cadena, 100);
    
    // Leer la subcadena a buscar
    cout << "Ingrese la subcadena a buscar: ";
    cin.getline(subcadena, 100);
    
    // Usar strstr para buscar la subcadena
    char* resultado = strstr(cadena, subcadena);
    
    // Mostrar el resultado
    if (resultado != nullptr) {
        // Calcular la posición encontrando la diferencia entre los punteros
        int posicion = resultado - cadena;
        cout << "Subcadena encontrada en la posición: " << posicion << endl;
    } else {
        cout << "Subcadena no encontrada." << endl;
    }
    
    return 0;
}
*/



/* C++ style
#include <iostream>
#include <string>

// Función para buscar una subcadena dentro de una cadena
int buscarSubcadena(const std::string& cadena, const std::string& subcadena) {
    int n = cadena.length();
    int m = subcadena.length();
    
    // Recorrer la cadena principal
    for (int i = 0; i <= n - m; i++) {
        int j;
        
        // Verificar si la subcadena coincide
        for (j = 0; j < m; j++) {
            if (cadena[i + j] != subcadena[j]) {
                break;
            }
        }
        
        // Si la subcadena coincide, devolver la posición inicial
        if (j == m) {
            return i;
        }
    }
    
    // Si no se encuentra la subcadena, devolver -1
    return -1;
}

int main() {
    std::string cadena, subcadena;
    
    // Leer la cadena principal
    std::cout << "Ingrese la cadena principal: ";
    std::getline(std::cin, cadena);
    
    // Leer la subcadena a buscar
    std::cout << "Ingrese la subcadena a buscar: ";
    std::getline(std::cin, subcadena);
    
    // Buscar la subcadena
    int resultado = buscarSubcadena(cadena, subcadena);
    
    // Mostrar el resultado
    if (resultado != -1) {
        std::cout << "Subcadena encontrada en la posición: " << resultado << std::endl;
    } else {
        std::cout << "Subcadena no encontrada." << std::endl;
    }
    
    return 0;
}


*/