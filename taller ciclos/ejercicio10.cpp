#include <iostream>
using namespace std;

/*10. Leer un número entero y determinar a cuánto es igual la suma de todos los enteros comprendidos entre 1 y el número leído.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;
    int suma = 0;

    while (true)
    {
        cout<<"Ingrese un numero mayor a 1: ";
        cin>>num;

        if (num <= 1)
        {
            cout<<"El numero no puede ser menor o igual a 1"<<endl;
        } else {
            break;
        }
    }

    //ciclo para guardar en memoria el acumulado de las sumas
    for (int i = 2; i < num; i++)
    {
        suma += i;
    }

    cout<<"\nLa suma de los enteros comprendidos entre 1 y "<<num<<" es: "<<suma<<endl;

    return 0;
}