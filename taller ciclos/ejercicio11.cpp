#include <iostream>
using namespace std;

/*11. Leer un número entero de dos dígitos y mostrar en pantalla todos los enteros 
comprendidos entre un dígito y otro.

Ver 5.11 agosto 30/2024          Juan Pablo García
*/

int main(){
    int num;

    while (true)
    {
        cout<<"Ingrese un numero de dos digitos: ";
        cin>>num;

        if (num < 10 || num > 99)
        {
            cout<<"El numero debe ser de dos digitos\n"<<endl;
        } else {
            break;
        }
    } 
    
    //sacar cada digito
    int unidad = num % 10;
    int decena = num / 10;

    //condicionales para determinar los rangos teniendo en cuenta cual de los dos digitos es mayor
    if (decena == unidad)
    {
        cout<<"Los digitos son iguales, no hay numeros entre ellos"<<endl;
    } else if (decena < unidad)
    {   
        cout<<"Los numeros entre "<<decena<<" y "<<unidad<<" son: "<<endl;
        for (int i = decena + 1; i < unidad ; i++)
        {
            cout<<i<<endl;
        }
    } else {
        cout<<"Los numeros entre "<<unidad<<" y "<<decena<<" son: "<<endl;
        for (int i = unidad + 1; i < decena ; i++)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}