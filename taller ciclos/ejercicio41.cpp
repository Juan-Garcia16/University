#include <iostream>
using namespace std;

/*41. Determinar a cuánto es igual la suma de los elementos de la serie de Fibonacci entre 0 y 100.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int a = 0;
    int b = 1;
    int suma = 0;

    cout<<"Suma de los elementos de la serie de fibonacci entre 0 y 100: ";

    suma += 1;//para incluir el 1 que se repite al inicio de la serie

    //serie de fibonacci restringida hasta un numero n para sumar sus valores
    while (true)
    {
        int siguiente = a+b;

        if (siguiente > 100)
        {
            break;
        }

        a = b;
        b = siguiente;
        suma += siguiente;
    }

    cout<<suma<<endl;

    return 0;
}