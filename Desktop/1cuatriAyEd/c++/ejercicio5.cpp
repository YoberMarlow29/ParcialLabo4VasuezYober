#include <iostream>
using namespace std;

int main(){

    // Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una
    //leyenda según sea: equilátero, isósceles o escalenos.

    int valorA;
    int valorB;
    int valorC;

    cout<<"Ingresar un valor: ";
    cin>>valorA;
    cout<<"Ingresar un segundo valor: ";
    cin>>valorB;
    cout<<"Ingresar un tercer valor: ";
    cin>>valorC;

    if ((valorA + valorB > valorC) || (valorA + valorC > valorB) || (valorB + valorC > valorA)) {

        if(valorA==valorB && valorB==valorC){

            cout << "El triangulo es equilatero." << endl;
        }else if(valorA==valorB||valorB==valorC||valorC==valorA){

            cout << "El triangulo es isosceles ." << endl;
        }else{

            cout << "El triangulo es escaleno ." << endl;
       
        }

    } else {
        cout << "No forman un triangulo" << endl;
    }


    return 0;
}