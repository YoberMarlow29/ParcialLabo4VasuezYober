#include <iostream>
using namespace std;    

int funcionFactorial(int numero);

int main(){

    int numero=0;
    int resultado =0;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    resultado=funcionFactorial(numero); 


    cout<<"El factorial del numero "<<numero<<" es "<< resultado;

    return 0;
}



//5! = 5x4x3x2x1
int funcionFactorial(int numero){

    int factorial=1;

    for (int i = 1; i <= numero; i++)
    {//                    4
        factorial = factorial*i;
      //   1            1      1   
      //    1          1       2
      // 2             2       3
      //6              6       4
      //24
    }

    return factorial;//resultado
    
}