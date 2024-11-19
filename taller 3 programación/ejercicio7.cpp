#include <iostream>
#include <string>
using namespace std;

/*7-. Un ejemplo, comprobar si un carácter es una letra (tanto mayúscula como minúscula)
o no.  El programa es similar al del ejercicio 6 anterior, 
pero aquí se  combina los operadores “and y or” para obtener 
las dos franjas en las que están los caracteres de las letras:

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    char caracter;

    cout<<"Ingrese una letra: ";
    cin>>caracter;

    string resultado = (caracter >= 'a' && caracter <= 'z') ? "Es una letra minuscula" : (caracter >= 'A' && caracter <= 'Z') ? "Es una letra mayuscula" : "el dato ingresado no es una letra";
    cout<<resultado<<endl;
    
    return 0;
}