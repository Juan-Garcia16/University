#include <iostream>
#include <locale>
using namespace std;

/*Lea un entero y diga:
 Si es positivo, negativo o cero.
 Si es par o impar

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    int num;
    
    //entrada de datos
    cout<<"Ingrese un número entero: ";
    cin>>num;

    //condiciones para el programa
    if (num%2 == 0) {
        cout<<"El número es par"<<endl;
    } else {
        cout<<"El número es impar"<<endl;
    }
    if (num > 0) {
        cout<<"El número es positivo"<<endl;
    } else if (num < 0) {
        cout<<"El número es negativo"<<endl;
    } else {
        cout<<"El número es cero"<<endl;
    }

    return 0;
}