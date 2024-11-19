#include <iostream>
#include <cctype>
using namespace std;

/*3-. Que pida una letra y detecte si es una vocal, en caso afirmativo imprimir una palabra que empiece por esa vocal.

Ver 5.11 agosto 23/2024          Juan Pablo García
*/

int main(){
    char caracter;

    cout<<"Ingrese una letra: ";
    cin>>caracter;

    caracter = toupper(caracter);

    switch (caracter){
        case 'A' : cout<<"Es una vocal: Arroz"<<endl; break;
        case 'E' : cout<<"Es una vocal: Elefante"<<endl; break;
        case 'I' : cout<<"Es una vocal: Inicio"<<endl; break;
        case 'O' : cout<<"Es una vocal: Oceano"<<endl; break;
        case 'U' : cout<<"Es una vocal: Union"<<endl; break;
        default : cout<<"La letra no es una vocal"<<endl;
    }
    return 0;
}