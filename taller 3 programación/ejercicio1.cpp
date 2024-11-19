#include <iostream>
#include <string>
using namespace std;

/*1-. operador ternario ?;cond;v;f  para hallar el mayor de dos números       

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    int num1, num2;

    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;

    string resultado = (num1 == num2) ? "Los numeros son iguales" : (num1 > num2) ? "El mayor es: " + to_string(num1) : "El mayor es: " + to_string(num2);
    cout<<resultado<<endl;

    return 0;

}