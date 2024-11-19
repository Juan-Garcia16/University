#include <iostream>
using namespace std;

/**1-. Que pida un número del 1 al 7 y diga el día de la semana correspondiente. 

Ver 5.11 agosto 23/2024          Juan Pablo García
*/

int main(){
    int num;

    cout<<"Ingrese un numero del 1 al 7 correspondiente a un dia de la semana: ";
    cin>>num;

    switch (num){
        case 1 : cout<<"Lunes"<<endl; break;
        case 2 : cout<<"Martes"<<endl; break;
        case 3 : cout<<"Miercoles"<<endl; break;
        case 4 : cout<<"Jueves"<<endl; break;
        case 5 : cout<<"Viernes"<<endl; break;
        case 6 : cout<<"Sabado"<<endl; break;
        case 7 : cout<<"Domingo"<<endl; break;
        default : cout<<"El numero no esta entre 1 y 7 (lunes-domingo)"<<endl;
        
    }
    return 0;
}