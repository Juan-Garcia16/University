#include <iostream>
using namespace std;

/*42. Determinar a cuánto es igual el promedio entero de los elementos de la serie
de Fibonacci entre 0 y 1000.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int a = 0;
    int b = 1;
    int contador = 2; //para incluir los primeros 2 numeros que no estan presentes en el ciclo
    int suma = a + b;
    int promedio = 0;

    while (true)
    {
        int siguiente = a + b;

        if (siguiente > 1000)
        {
            break;
        }

        a = b;
        b = siguiente;
        contador++;
        suma += siguiente;
    }

    promedio = suma / contador;

    cout<<"Promedio entero de los de los elementos de la serie de Fibonacci entre 0 y 1000: "<<endl<<promedio<<endl;

    return 0;
}


