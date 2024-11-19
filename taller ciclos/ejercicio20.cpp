#include <iostream>
using namespace std;

/*20. Leer un número entero y determinar cuántos dígitos tiene

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;
    int count = 0;

    cout<<"Ingrese un numero entero: ";
    cin>>num;

    //forma de evitar errores para este ejercicio
    num = abs(num);
    
    
    if (num == 0) 
    {
        count = 1; 
    } else {
        while (num > 0) 
        {
            num /= 10;
            count++;
        }
    }

    cout <<"El numero ingresado tiene "<<count<<" digitos"<<endl;

    return 0;
}