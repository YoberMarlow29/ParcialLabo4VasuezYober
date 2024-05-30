#include <iostream>
using namespace std;

int main(){

    /*
    Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de
    los menores que -10.

    */
    int numero;
    int contadorNumeroMayoresCien=0;
    int acumuladorNumerosMayoresCien=0;
    int acumuladorNumerosMenorMenosDiez=0;




   for (int i = 0; i <= 10; i++)
   {  //                    0+1
    //     1                1+1
    //    2                 2+1
    //3                      3+1
    //4                      4+1
    //5

    cout<<"Ingrese un numero: ";
    cin>>numero;// 200 80 -45  400 -8

    if(numero>100){

        contadorNumeroMayoresCien++; //0 1  2
        acumuladorNumerosMayoresCien=acumuladorNumerosMayoresCien+numero;
            //0                         0                         200
            //200                        200                      500
            //700
    }else if(numero<-10){

        acumuladorNumerosMenorMenosDiez=acumuladorNumerosMenorMenosDiez+numero;
        // 0                                    0                         -45
        //-45
    }

   }

   float promedioNumerosMayoresCien=0;

   promedioNumerosMayoresCien= acumuladorNumerosMayoresCien/contadorNumeroMayoresCien;

    cout << "El promedio de los números mayores que 100 es: " << promedioNumerosMayoresCien << endl;
    cout << "La suma de los números menores que -10 es: " << acumuladorNumerosMenorMenosDiez << endl;

   
   
 

    return 0;
}