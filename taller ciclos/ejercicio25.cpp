#include <iostream>
using namespace std;

/*25. Leer un número entero y determinar a cuánto es igual el promedio entero de sus dígitos.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;
    int suma = 0;
    int contador = 0;
    int promedio = 0;

    while (true)
    {
        cout<<"Ingrese un numero para calcular el promedio de sus digitos: ";
        cin>>num;

        num = abs(num);
        if (num >= 0 && num <= 9)
        {
            cout<<"Ingrese un numero de por lo menos 2 digitos"<<endl;
        } else {
            break;
        }   
    }
    
    //ciclo para guardar la suma y el numero de datos en memoria
    while (num > 0)
    {
        suma += (num % 10);
        contador++;
        num /= 10;
    }

    promedio = suma / contador;
    
    cout<<"El promedio entero de los digitos es igual a: "<<promedio<<endl;

    return 0;
}