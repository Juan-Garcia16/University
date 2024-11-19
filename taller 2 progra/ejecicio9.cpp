#include <iostream>
#include <locale>
using namespace std;

/*Lea un entero de un dígito y diga la letra (mayúscula y minúscula),
correspondiente a ese dígito, suponiendo que el número 0 corresponde a la letra 'A'
- 'a'.

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main() {
    int num;
    
    //entrada de datos
    cout<<"Ingrese un número entero entre 0 y 9: ";
    cin>>num;
    
    //condiciones para el programa
    if (num < 0 || num > 9) {
        cout << "El número ingresado no está en el rango entre 0 y 9" << endl;
        return 0; 
    }

    //conversor de núsmero a letra
    char mayus = 'A' + num;
    char minus = 'a' + num;

    //salida de datos
    cout<<"Letra mayúscula correspondiente: " <<mayus<<endl;
    cout<<"Letra minúscula correspondiente: " <<minus<<endl;

    return 0;
}