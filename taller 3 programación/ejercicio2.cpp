#include <iostream>
using namespace std;

/*2-. Problema propuesto
Ingresar por teclado dos números enteros. 
Si los valores son iguales sumarlos, sino multiplicarlos. 
Emplear el operador condicional ?: para guardar en una variable el resultado.  

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    int num1, num2;

    cout<<"Ingrese un numero: ";
    cin>>num1;

    cout<<"Ingrese otro numero: ";
    cin>>num2;

    int resultado = (num1 == num2) ? num1+num2 : num1*num2;

    cout<<resultado<<endl;
    return 0;

}