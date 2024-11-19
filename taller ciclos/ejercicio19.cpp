#include <iostream>
#include <math.h>
using namespace std;

/*19. Leer un número entero y determinar si es primo

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;
    bool primo = true;

    while (true)
    {
        cout<<"Ingrese un numero entero para verficar si es primo: ";
        cin>>num;

        if (num < 2)
        {
            cout<<"El numero debe ser mayor o igual a 2 para validarse\n"<<endl;
        } else {
            break;
        }
    }
    
    for (int i = 2; i <= sqrt(num); i++) //la raiz optimiza la cantidad de veces que se repite el ciclo para verificar
    {
        if (num % i == 0)
        {
            primo = false;
            break;
        }
    }

    if (primo)
    {
        cout<<"El numero "<<num<<" es primo"<<endl;
    } else {
        cout<<"El numero "<<num<<" no es primo"<<endl;
    }

    return 0;
}