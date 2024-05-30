#include <iostream>
using namespace std;

int main(){

    /*

    Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
    • ‘menor’ si la edad es menor o igual a 12
    • ‘cadete’ si la edad esta comprendida entre 13 y 18
    • ‘juvenil’ si la edad es mayor que 18 y no supera los 26
    • ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores
    */

   int edad;

   cout<<"Ingrese su edad: ";
   cin>>edad;

   if(edad<=12){

    cout<<"La persona es menor";
    
   }else if(edad>=13&&edad<=18){

    cout<<"La persona es cadete";

   }else if(edad>18&&edad<=26){

    cout<<"La persona es juvenil";

   }else{

        cout<<"La persona es mayor";

   }




    


    return 0;
}
