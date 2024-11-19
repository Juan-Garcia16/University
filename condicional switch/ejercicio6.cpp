#include <iostream>
#include <string>
using namespace std;

/*6-. Solicitar por teclado un color por teclado y determinar si pertenece a los colores del Arco Iris

Ver 5.11 agosto 23/2024          Juan Pablo García
*/

int main(){
    string color;
    int validacion = 0;

    cout<<"Ingrese un color (en minusculas): ";
    cin>>color;

    if (color == "rojo" || color == "naranja" || color == "amarillo" || color == "verde" || color == "cian" || color == "azul" || color == "violeta"){
        validacion = 1;
    } else{
        validacion = 0;
    }

    switch (validacion){     
        case 0 : cout<<color<<" No es un color del arcoiris"<<endl; break;
        case 1 : cout<<color<<" es un color del arcoiris"<<endl; break;
    }
    return 0;
}