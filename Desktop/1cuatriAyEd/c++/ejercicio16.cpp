#include <iostream>
using namespace std;


// Declaración de la función
int suma(int a, int b);
float CalcularPorcentajeDiferencia (int A, int B);





int main() {

    int resultado = suma(4,2); // llamado a la función
    int porcentajeDiferencia= CalcularPorcentajeDiferencia(2,4);
    cout<<"El resultado de la suma funcion es: "<<resultado<<endl;
    cout<<"la diferencia de la funcion es: "<<porcentajeDiferencia;



    return 0;
}




// Definición de la función
int suma(int a, int b) {
 return a + b;
}
float CalcularPorcentajeDiferencia (int A, int B){


    return ((B-A)*100/(A+B));
}
 
