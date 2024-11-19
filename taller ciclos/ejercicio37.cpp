#include <iostream>
using namespace std;

/*37. Generar todas las tablas de multiplicar del 1 al 10.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/
int main(){
    int num = 1;
    cout<<"Tablas de multiplicar del 1 al 10: \n"<<endl;

    //ciclo dentro de un ciclo
    while (num <= 10)
    {   
        cout<<"\nTabla del "<<num<<endl;

        for (int i = 1; i <= 10; i++)
        {
            cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        }
        num++;
    }
    
    
}