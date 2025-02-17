// Yainelly Ortiz Serrano, @Yainelly 
// 801-23-1813
// Helpers: Chat GPT

#include <iostream>
using namespace std;

int main(){
  
  int a, b, c, d; 
  char slash;

  cout << "En este programa sumaremos dos fracciones.\n ";
  cout << "Escriba dos fracciones de forma a/b\n"; 

  cout << "Fraccion 1: ";
  cin >> a >> slash >> b;

  cout << "Fraccion 2: "; 
  cin >> c >> slash >> d; 

  int numerador = (a * d) + (b * c);
  int denominador = (b * d); 

  cout << "La suma de estas dos fracciones es: " << numerador << "/" << denominador << "\n"; 
  
  return 0;
}
