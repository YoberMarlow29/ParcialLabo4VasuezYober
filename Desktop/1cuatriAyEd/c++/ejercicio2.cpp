#include <iostream>
using namespace std;

int main(){    
    
    //2. Dado un numero entero de la forma (AAAAMMDD), que representa una fecha valida
    //mostrar el dia, mes y año que representa

    int fecha;

    cout<<"Ingrese la fecha con el formato (AAAA-MM-DD)"<<endl;
    cin>>fecha;

        // Extraer el día, mes y año
    int dia = fecha % 100;
    int mes = (fecha / 100) % 100;
    int anio = fecha / 10000;

        // Mostrar la fecha en formato legible
    cout << "La fecha ingresada es: " << dia << "/" << mes << "/" << anio << endl;
   
    return 0;
}