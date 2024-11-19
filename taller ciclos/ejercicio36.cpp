#include <iostream>
using namespace std;

/*36. Mostrar en pantalla la tabla de multiplicar del número 5.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    const int num = 5;
    cout<<"Tabla de multiplicar del 5: "<<endl;

    for (int i = 1; i <= 10; i++)
    {
        cout<<"5 * "<<i<<" = "<<num*i<<endl;
    }
    
}