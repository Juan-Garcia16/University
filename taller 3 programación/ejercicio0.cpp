#include <iostream>
#include <string>
using namespace std;

/*0-. SE USA EL OPERADOR TERNARIO  condición ? verdadera :  falso
ejercicio 0:                         
1) Pedir un numero al usuario.                      
2) Leer el numero                                
3) Si el número es mayor que 0:                     
Imprimir "El número es positivo"              
De lo contrario:                                 
Imprimir "El número NO es positivo"        

ver 5.11 agosto 20/2024     Juan Pablo García
*/

int main(){
    int num;

    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"El número ingresado fue el: "<<num<<endl;

    string resultado = (num > 0) ? "El número es positivo" : (num == 0) ? "El numero es cero" : "El numero NO es positivo";
    cout<<resultado<<endl;

    return 0;
}