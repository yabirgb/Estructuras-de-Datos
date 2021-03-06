// José Antonio Álvarez Ocete
// Yábir García Benchakhtir
#include "myStack.h"
#include "StackCeldas.h"
#include <iostream>

using namespace std;

int main(){


  myStack<int> prueba;
  StackCeldas<int> prueba_own;
  int numero;
  string mensaje;

  cout << "Ejemplo usando enteros: " << endl;
  cout << "Introduzca los números que quiere introducir en la pila (-1 para parar): " << endl;

  cin >> numero;
  while(numero != -1){
    prueba.push(numero);
    prueba_own.push(numero);
    cout << numero << " introducido. Siguiente: " << endl;
    cin >> numero;
  }

  cout << endl;

  cout << "- Stack usando STL" << endl;
  cout << "El tamaño de la pila es: " << prueba.size() << endl;
  cout << "El elemento en el tope es: " << prueba.peak() << endl;

  cout << "-------------" << endl;
  cout << "Quitar elementos de la pila: " << endl;

  int size = prueba.size();
  for(int i = 0; i < size; i++){
    cout << "Nuevo tope: " << prueba.peak() << ".";
    cout << "Tamaño actual: " << prueba.size() << endl;
    cout << "Eliminando tope: " << prueba.pop() << ".";


  }

  if(prueba.isEmpty())
    mensaje = "Sí está vacio.";
  else
    mensaje = "No está vacio.";

  cout << endl << "¿Está vacio? " << mensaje << endl;


  cout << endl << "- Stack usando celdas enlazadas" << endl;

  cout << "El tamaño de la pila es: " << prueba_own.size() << endl;
  cout << "El elemento en el tope es: " << prueba_own.peak() << endl;

  cout << "-------------" << endl;
  cout << "Quitar elementos de la pila: " << endl;

  int size2 = prueba_own.size();
  for(int i = 0; i < size2; i++){
    cout << "Nuevo tope: " << prueba_own.peak() << ".";
    cout << "Tamaño actual: " << prueba_own.size() << endl;
    cout << "Eliminando tope: " << prueba_own.pop() << ".";


  }

  if(prueba_own.isEmpty())
    mensaje = "Sí está vacio.";
  else
    mensaje = "No está vacio.";

  cout << endl << "¿Está vacio? " << mensaje << endl;



}
