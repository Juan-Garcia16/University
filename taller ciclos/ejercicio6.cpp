#include <iostream>
using namespace std;

/*6. Leer un número entero de tres dígitos y mostrar todos los enteros comprendidos entre 1 y cada uno de los dígitos.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;

    while (true)
    {
        cout<<"Ingrese un numero de 3 digitos mayor a 1: ";
        cin>>num;

        if (num <= 1 || num < 100)
        {
            cout<<"El numero no cumple las condiciones\n"<<endl;
        } else {
            break;
        }  
    }

    //sacar cada digito del numero
    int unidades = num % 10;
    int decenas = (num / 10) % 10;
    int centenas = num / 100;

    //ciclos para cada rango entre el 1 y los digitos
    cout<<"\nEntre el 1 y el "<<centenas<<" estan: "<<endl;
    for (int i = 2; i < centenas; i++)
    {
        cout<<i<<endl;
    }
    
    cout<<"\nEntre el 1 y el "<<decenas<<" estan: "<<endl;
    for (int i = 2; i < decenas; i++)
    {
        cout<<i<<endl;
    }

    cout<<"\nEntre el 1 y el "<<unidades<<" estan: "<<endl;
    for (int i = 2; i < unidades; i++)
    {
        cout<<i<<endl;
    }
    
    return 0;
}