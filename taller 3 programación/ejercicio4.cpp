#include <iostream>
#include <string>
using namespace std;

/*4-. Tras declarar las variables que pueden mostrar los resultados, 
Escribe un número del 10 al 20
mediante el operador terciario, (r?v:f) mostramos en pantalla el valor de r
si el usuario ha escrito "bien" o "mal"  con respecto a lo que le hemos pedido.

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    int num;
    
    cout<<"Ingrese un numero entre el 10 y el 20: ";
    cin>>num;

    string resultado = (num > 20 || num < 10) ? "El usuario ha escrito MAL" : "EL usuario ha escrito BIEN";
    cout<<resultado<<endl;
}
