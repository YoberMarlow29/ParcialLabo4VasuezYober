#include <iostream>
using namespace std;

int suma(int A, int B); // PASO 1_declarar funcion, se le dice firma de la funcion

int main(){

 int A = 7;
 int B = 8;
  int resultado = suma(A,B); // PASO 3 se llama a la funcion y se la guarda en una variable porque esta retorna un resultrado de tipo INT

 cout<<"La suma de A y B es: "<< resultado<<endl;

 return 0;
}
//PASO 2 desarrollo de la funcion o definicion de la funcion, se hace todo el desarrollo de la funcion
int suma(int A, int B){

    return A+B; // retorna un numero de tipo int
}
