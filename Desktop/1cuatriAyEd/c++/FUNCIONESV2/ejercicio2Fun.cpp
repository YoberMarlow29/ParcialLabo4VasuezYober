#include <iostream>
using namespace std;

int multiplicacion(int A, int B);
int main(){

int A= 5;
int B= 6;
int resultado= multiplicacion(A,B);
cout<<"La multiplicacion de A y B es: "<<resultado;



return 0;
}
int multiplicacion(int A, int B)
{

    return A*B; 
}

