#include <iostream>
#include <math.h>
using namespace std;

/*1- Calcular y mostrar la suma, resta, multiplicación, división, potencia de dos números

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables
    int num1, num2;

    cout<<"Programa para calcular suma, resta, multiplicacion, division, potencia de dos numeros."<<endl;

    //entrada de datos
    cout<<"\nIngrese el primer numero: "; 
    cin>>num1;
    cout<<"Ingrese el segundo numero: "; 
    cin>>num2;

    //salida de datos
    cout<<"\nLa suma es = "<<num1+num2<<endl;
    cout<<"La resta es = "<<num1-num2<<endl;
    cout<<"La multiplicacion es= "<<num1*num2<<endl;
    cout<<"La division es = "<<(float)num1/num2<<endl;

    return 0;
}