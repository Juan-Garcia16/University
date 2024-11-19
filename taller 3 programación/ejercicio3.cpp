#include <iostream>
#include <string>
using namespace std;

/*3-. operador ternario ?;cond;v;f  para hallar el mayor de tres números incluye validación    

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    int num1, num2, num3;

    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
    cout<<"Ingrese otro numero: ";
    cin>>num3;


    string resultado = (num1 == num2 || num1 == num3 || num2 == num3) ? "Hay numeros repetidos"
                : ((num1 > num2 && num2 > num3) || (num1 > num3) && (num3 > num2) ) ? "El mayor es: " + to_string(num1)
                : ((num2 > num3 && num3 > num1) || (num2 > num1 && num1 > num3) ) ? "El mayor es: " + to_string(num2)
                : "El mayor es: " + to_string(num3);

    cout<<resultado<<endl;
    return 0;

}