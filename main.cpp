// Yainelly Ortiz Serrano, @Yainelly 
// 801-23-1813
// Helpers: Chat GPT (para que me sugiriera cambios a mi programa. Solo me sugirio añadirle el {char slash} (linea 11) al programa)

#include <iostream>
using namespace std;

int main(){
  
  // le damos valor a las variables
  
  int a, b, c, d; 
  char slash;

  // cout de las instrucciones
  
  cout << "En este programa sumaremos dos fracciones.\n ";
  cout << "Escriba dos fracciones de forma a/b\n"; 

  // le pedimos al usuario que ponga los numeros para fraccion 1 y fraccion 2

  cout << "Fraccion 1: ";
  cin >> a >> slash >> b;

  cout << "Fraccion 2: "; 
  cin >> c >> slash >> d; 
  
  // formula para sumar las fracciones 
  
  int numerador = (a * d) + (b * c);
  int denominador = (b * d); 

  // cout de la suma de las dos fracciones 
  
  cout << "La suma de estas dos fracciones es: " << numerador << "/" << denominador << "\n"; 
  
  return 0;
}
