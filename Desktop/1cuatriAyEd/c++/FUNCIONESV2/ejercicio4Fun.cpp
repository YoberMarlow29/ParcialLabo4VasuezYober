#include <iostream>
using namespace std;            
//Escribe una función que reciba un número entero y devuelva True si es
//primo y False en caso contrario

bool esPrimo(int numero);


int main(){

    int num;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un numero entero: ";
    cin >> num;

    // Verificar si el número es primo y mostrar el resultado
    if (esPrimo(num)==true) {
        cout << num << " es primo." << endl;
    } else {
        cout << num << " no es primo." << std::endl;
    }



    return 0;
}

bool esPrimo(int numero) {
    // Si el número es menor o igual a 1, no es primo
    if (numero <= 1) {


        return false;
    }

    // Verificar si el número es divisible por algún número desde 2 hasta su raíz cuadrada
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false; // El número es divisible, por lo tanto no es primo
        }
    }

    // Si no se encontró ningún divisor hasta la raíz cuadrada del número, es primo
    return true;
}

