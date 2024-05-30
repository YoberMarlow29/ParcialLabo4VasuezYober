#include <iostream>
using namespace std;

int main(){


    int tipo_infraccion=0;
    char motivo[100]; // Array de caracteres para almacenar el motivo
    int valor_multa=0;
    char gravedad=0;

    int sumatoriaL=0;
    int sumatoriaM=0;
    int sumatoriaG=0;

    int contadorTipoG=0;


    for (int i = 0; i < 2; ++i) { //bucle es el for y el while o do while

        cout << "Ingrese el tipo de infraccion (1, 2, 3, o 4) para la infraccion: ";
        cin >> tipo_infraccion;

        cout << "Ingrese el motivo de la infraccion: ";
        cin.ignore(); // Limpiar el buffer del teclado
        cin.getline(motivo,100);

        cout << "Ingrese el valor de la multa: ";
        cin >> valor_multa;

        cout << "Ingrese la gravedad de la infraccion (L, M, G): ";
        cin >> gravedad;


        switch (gravedad)
        {
        case 'L':
                sumatoriaL=sumatoriaL+valor_multa;
            break;
        case 'M':
                sumatoriaM=sumatoriaM+valor_multa;

            break;
        case 'G':
                contadorTipoG++;
                sumatoriaG=sumatoriaG+valor_multa;

            break;
        
        default:

            cout << "Gravedad de la infraccion no valida. Se omite esta infraccion." << endl;

            break;
        }

    }

    if(contadorTipoG>3){

        cout<<"Clausurar fabrica"<< endl;
    }

      // Imprimir los valores totales de la multa según la gravedad
    cout << "Total de multa por gravedad:" << endl;
    cout << "Gravedad L: " << sumatoriaL << endl;
    cout << "Gravedad M: " << sumatoriaM << endl;
    cout << "Gravedad G: " << sumatoriaG << endl;



    return 0;
}