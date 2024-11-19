#include <iostream>
#include <string>
using namespace std;

/*6-. escriba una vocal minúscula, y  comprobaremos  que lo que ha escrito el usuario 
es efectivamente una vocal minúscula. O CASO CONTRARIO OTRO VALOR.

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    char vocal;

    char a = 'a';
    char e = 'e';
    char i = 'i';
    char o = 'o';
    char u = 'u';

    cout<<"Ingrese una vocal minuscula: ";
    cin>>vocal;

    string resultado = (vocal == a || vocal == e || vocal == i || vocal == o || vocal == u) ? "Es una vocal minuscula" : "No es una vocal minuscula";
    cout<<resultado<<endl;
    return 0;

}