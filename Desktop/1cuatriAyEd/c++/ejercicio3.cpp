#include <iostream>
using namespace std;

int main(){

    //Realizar la suma de todos los números pares entre 2 y 10000

    int suma = 0;

    // Iterar desde 2 hasta 10000
    for (int i = 2; i <= 10; i++) {
        // Verificar si el número es par
        if (i % 2 == 0) {
            // Sumar el número a la suma total
           // suma += i;
            suma = suma + i;
        }
    }

    // Imprimir la suma de los números pares
    cout<< "La suma de todos los números pares entre 2 y 10000 es: " << suma << endl;



    


    return 0;
}