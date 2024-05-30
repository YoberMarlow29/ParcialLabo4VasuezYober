#include <iostream>
using namespace std;

/*
Dado un conjunto de 5 valores enteros determinar e imprimir cuantos valores positivos, 
cuantos negativos y cuantos ceros
*/

int main(){

    int positivos =0,negativos =0,ceros =0,i,valor;
    int cantidad;
    cout<<"Ingrese el tamaño del lote";
    cin>> cantidad;
    for ( i = 0; i < cantidad; i++)
    {       
        cout<<"Ingrese un valor: ";
        cin>> valor;

        if(valor==0) ceros++; //operador de incremento ceros++

        if(valor<0) negativos++; 

        if(valor>0) positivos++;
    }

    cout<<"los valores positivos son: "<<positivos<<endl;
    cout<<"los valores negativos son: "<<negativos<<endl;
    cout<<"los valores ceros son: "<<ceros<<endl;





}