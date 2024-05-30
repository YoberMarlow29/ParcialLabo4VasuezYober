#include <iostream>
using namespace std;

void duplicar(int& a);

int main() {

    int numero = 5;

    duplicar(numero);

    cout << "Fuera de la funcion: " << numero << endl;


    return 0;
}

void duplicar(int& a) {

    a = a * 2;

    cout << "Dentro de la funcion duplicar: " << a << endl;
}
