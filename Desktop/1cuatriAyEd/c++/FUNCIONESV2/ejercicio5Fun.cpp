#include <iostream>
using namespace std;

//int maximoComunDivisor(int A,int B);
int mcd(int a,int b);
int main(){
    
    int numero1;
    int numero2;
    cout<<"Ingrese un numero entero: ";
    cin>>numero1;
    
    cout<<"Ingrese el segundo numero: ";
    cin>>numero2;

    int resultado= mcd(numero1,numero2);

    cout<<"el numero mcd es: "<<resultado;


    return 0;
}

int mcd(int a,int b){

    int res=1;
    for (int i = 1; i < a; i++)
    {
        if((a % i==0)&&(b % i==0)){

            res=i;
        }
    }

    return res;
    
}