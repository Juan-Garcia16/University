#include <iostream>
using namespace std;

/*22. Leer un número entero y determinar cuántas veces tiene el dígito 1.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    long int num;
    int count = 0;

    cout<<"Ingrese un numero: ";
    cin>>num;

    num = abs(num);

    //ciclo para encontrar los 1
    while (num > 0)
    {
        if (num % 10 == 1)
        {
            count++;
        }
        
        num /= 10;
    }

    cout<<"El numero tiene "<<count<<" veces el numero 1"<<endl;
    return 0;
}