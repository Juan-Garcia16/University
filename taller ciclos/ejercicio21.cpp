#include <iostream>
using namespace std;

/*21. Leer un número entero y determinar a cuánto es igual a la suma de sus dígitos.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;
    int suma = 0;

    while (true)
    {
        cout<<"Ingrese un numero para sumar sus digitos: ";
        cin>>num;

        num = abs(num);

        if (num < 10)
        {
            cout<<"El numero solo tiene un digito\n"<<endl;
        } else {
            break;
        }   
    }
    
    //ciclo para sumar los digitos en un acumulado
    while (num > 0)
    {
        suma += (num % 10);
        num /= 10;
    }

    cout<<"La suma de sus digitos es: "<<suma<<endl;
    
    return 0;   
}