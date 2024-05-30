#include <iostream>
using namespace std;

int main(){

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
        cout << "Forman un triangulo" << endl;
    } else {
        cout << "No forman un triangulo" << endl;
    }

        return 0;



}