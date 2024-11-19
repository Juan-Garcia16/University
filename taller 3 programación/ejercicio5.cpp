#include <iostream>
#include <string>
using namespace std;

/*5 USE ternario para validar cadenas por ejemplo para pedir contraseñas, valide con una guardada

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    string contraseña, validacion;

    cout<<"Ingrese su contraseña (sin espacios): ";
    cin>>contraseña;

    cout<<"Ingrese otra vez la contraseña (sin espacios): ";
    cin>>validacion;

    string resultado = (contraseña == validacion) ? "La contraseña coincide" : "La contraseña fue mal escrita";
    cout<<resultado<<endl;
    return 0;
}