#include <iostream>
using namespace std;

/*39. Se define la serie de Fibonacci como la serie que comienza con los dígitos  0 y 1;  y va sumando progresivamente los dos últimos elementos de la serie, así:
0 1, 1 2 3 5 8 13 21 34.......
Utilizando el concepto de ciclo generar la serie de Fibonacci hasta llegar al número 10.000.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int a = 0;
    int b = 1;

    cout<<"Serie de Fibonacci hasta el numero 10000:\n "<<endl;

    cout<<a<<endl;
    cout<<b<<endl;

    while (true)
    {
        int siguiente = a+b;

        if (siguiente > 10000)
        {
            break;
        }

        cout<<siguiente<<endl;
        a = b;
        b = siguiente;
    }

    return 0;
}
