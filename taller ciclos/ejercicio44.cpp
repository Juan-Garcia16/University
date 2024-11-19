#include <iostream>
using namespace std;

/*44. Leer un número y calcularle su factorial.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/
int main(){
    int num;
    int factorial = 1;
    
    while (true)
    {
        cout<<"Ingrese un numero para calcular su factorial: ";
        cin>>num;

        if (num < 0)
        {
            cout<<"El factorial no esta definido para numeros negativos\n"<<endl;
        } else {
            break;
        }
        
    }
    
    while (num > 0)
    {
        factorial *= num;
        num--;
    }
    
    cout<<"El resultado es: "<<factorial<<endl;
    
    return 0;
}