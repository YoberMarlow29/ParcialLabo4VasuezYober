#include <iostream>
using namespace std;

void devuelveCocienteResto(int numeroA, int numeroB);

int main(){

    int num1, num2;

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese el dividendo: ";
    cin >> num1;
    cout << "Ingrese el divisor: ";
    cin >> num2;
    
    devuelveCocienteResto(num1,num2);


    return 0;
}

void devuelveCocienteResto(int numeroA, int numeroB){

    int cociente=0;
    int resto=0;
    if(numeroA>0){

    cociente = numeroA / numeroB;
    resto = numeroA % numeroB;

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
    }else{

        cout<<"Error no se puede divivir 0 por un numero"<< endl;
    }

}