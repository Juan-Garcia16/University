#include <iostream>
#include <math.h>
using namespace std;

/*2- Dado el radio de una circunferencia se pide calcular e imprimir su área.
Área = pi * r ^ (2)

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables
    int radio;
    float area;
    const float pi = 3.141592;

    //entrada de datos
    cout<<"\tPrograma para calcular el area de una circunferencia"<<endl;
    cout<<"\nIngrese el radio de la circunferencia: "; 
    cin>>radio;
    
    //cálculo del área
    area = pi*pow(radio,2);
    
    //salida de datos
    cout<<"\nArea de la circunferencia = "<<area<<endl;
    return 0;
}