#include <iostream>
#include <locale>
using namespace std;

/* Leer un número entero X y :
a) Decir si es positivo o negativo.
b) Decir si es par o impar.
c) Leer otro número Y y decir si X es múltiplo de y

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    int num1, num2;

    //entrada de datos
    cout<<"Ingrese un número: ";
    cin>>num1;

    if (num1 == 0){
        cout<<"El número es cero"<<endl;
    } else if (num1 > 0){
        cout<<"El número es positivo"<<endl;
    } else {
        cout<<"El número es negativo"<<endl;
    }

    if (num1%2 == 0){
        cout<<"El número es par"<<endl;
    } else {
        cout<<"El número es impar"<<endl;
    }

    cout<<"Ingrese otro número: ";
    cin>>num2;

    if (num2 != 0){
        if (num1%num2 == 0){
            cout<<num1<<" es múltiplo de "<<num2<<endl;
        } else {
            cout<<num1<<" no es múltiplo de "<<num2<<endl;
        }
    } else {
        cout<<"El segundo número no puede ser cero"<<endl;
    }
    return 0;
}