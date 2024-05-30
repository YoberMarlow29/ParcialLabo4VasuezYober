#include <iostream> //inclusion de las bibliotecas ==D serie de funciones establecidas por el lengauje c++ no tiene ";" porque es una etapa previa al proceso
using namespace std; //se indica que se usara el espacio de nombre estandar para utilizar cin,cout y endl

int main(){ //encabezado de la funcion principal

    int a,b; //declaracion de variables a y b
    cout<<"Ingrese un valor para a: ";
    cin>>a;//Ingresa por el teclado un valor que se almacena en a
    cout<<"Ingrese un valor para b: ";
    cin>>b;
   /*
    //Analisis de caso simple
    if(a>b){

        cout<<"El valor de A es mayor que el de B"<<endl;

    }
    //Analisis de caso simple completo: if(expresion) accion1; else accion2;
    if(a>b){

        cout<<"El valor de A es mayor que el de B"<<endl;

    }else{ 
        cout<<"El valor de B es mayor que el de A"<<endl;

    }
    //Analisis de caso anidado if(expresion1) accion1 else if(expresion2) accion2 else accion3

    if(a>b){

        cout<<"El valor de A es mayor que el de B"<<endl;

    }else if(b<a){ 
        cout<<"El valor de B es mayor que el de A"<<endl;

    }else{

        cout<<"Son iguales";
    }*/

    //Reemplazar los if anidados por analisis de casos simple incompleto

    if(a>b){

        cout<<"El valor de a es mayor que b"<<endl;

    }
    if(a<b){

        cout<<"El valor de b es mayor que a"<<endl;

    }
    if(a==b){

        cout<<"Ambos valores son iguales";
    }


    return 0; //valor de retorno de la funcion
}