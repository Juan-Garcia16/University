#include <iostream>
using namespace std;

/*1. Leer un número entero y mostrar todos los enteros comprendidos entre 1 y el número leído.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;
    int i = 0;

    while (true)
    {
        cout<<"Ingrese un numero mayor a 1: ";
        cin>>num;

        if (num <= 1){
        cout<<"El numero no puede ser menor o igual a 1"<<endl;
        } else {
            break;
        }
    }
    cout<<"Los numeros que están entre 1 y "<<num<<" son : "<<endl;
    
    //bucle for para imprimir los números que están en el rango
    for ( i = 2; i < num; i++)
    {
        cout<< i <<endl;
    }

    return 0;
}
