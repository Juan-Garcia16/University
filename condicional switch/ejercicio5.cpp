#include <iostream>
using namespace std;

/*5-. Que muestre un menú con las operaciones básicas y calcule esta operación con dos valores pedidos para la operación.

Ver 5.11 agosto 23/2024          Juan Pablo García
*/

int main(){
    int num1, num2, opcion;
    float resultado;

    cout<<"¿Que operacion basica desea realizar? (seleccione con numero)"<<endl;
    cout<<"\n1 -> suma"<<endl;
    cout<<"2 -> resta"<<endl;
    cout<<"3 -> multiplicacion"<<endl;
    cout<<"4 -> division"<<endl;
    cin>>opcion;

    cout<<"\nIngrese un numero: ";
    cin>>num1;
    cout<<"Ingrese un segundo numero: ";
    cin>>num2;

    switch (opcion){
        case 1 : cout<<"Resultado: ";
                resultado = num1+num2;
                cout<<resultado<<endl; break;
        case 2 : cout<<"Resultado: ";
                resultado = num1-num2;
                cout<<resultado<<endl; break;
        case 3 : cout<<"Resultado: ";
                resultado = num1*num2;
                cout<<resultado<<endl; break;
        case 4 : if (num2 == 0){
            cout<<"Error, no se puedo dividir por cero"<<endl;
        } else{
                cout<<"Resultado: ";
                resultado = static_cast<float>(num1)/num2;
                cout<<resultado<<endl; break;
        }

    }
    return 0;

}