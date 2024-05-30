#include <iostream>
using namespace std;

int main()
{
    int numeroEntero=0;

    int cantidadCeros=0;
    int promedioPositivos=0;
    int sumaNegativos=0;

    int acumuladorPositivos=0;
    int cantidadPositivos=0;
    char respuesta='y';




    while(respuesta=='y'){      

        cout << "Ingrese un numero entero: "; 
        cin >> numeroEntero;  

        /*if(numeroEntero == 0){

            cantidadCeros++;
        }
        if(numeroEntero>0){
            cantidadPositivos++;//1 2
            acumuladorPositivos =acumuladorPositivos+ numeroEntero; // 8 12
        }
        if(numeroEntero < 0){

            sumaNegativos =sumaNegativos +numeroEntero; //-8 -14 -16
        }*/
        if(numeroEntero == 0){

            cantidadCeros++;
        }else if(numeroEntero>0){

            cantidadPositivos++;//1 2
            acumuladorPositivos =acumuladorPositivos+ numeroEntero; // 8 12

        }else{
            sumaNegativos =sumaNegativos +numeroEntero; //-8 -14 -16

        }


        cout << "¿Desea ingresar otro numero? (y/n): ";
        cin >> respuesta;
    }

        promedioPositivos =acumuladorPositivos/cantidadPositivos;

 

    cout << "Hay " << cantidadCeros << " numeros ceros" << endl; // Cambiado
    cout << "El promedio de positivos es: " << promedioPositivos << endl; // Cambiado
    cout << "La sumatorio de negativos es: " << sumaNegativos << endl; // Cambiado
    
    return 0;
}

