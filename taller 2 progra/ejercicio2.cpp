#include <iostream>
#include <locale>
using namespace std;

/*Lea dos números y diga si el primero es múltiplo del segundo.

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    int num1, num2;

    //entrada de datos
    cout<<"Ingrese el primer número: ";
    cin>>num1;
    cout<<"Ingrese el segundo número: ";
    cin>>num2;

    //condiciones para el programa
    if (num2 != 0){
        if ((num1%num2) == 0){
            cout<<num1<<" es múltiplo de "<<num2<<endl;
        } else{
            cout<<num1<<" no es múltiplo de "<<num2<<endl;
        }
    } else{
        cout<<"El segundo número no puede ser cero"<<endl;
    }

    return 0;
}