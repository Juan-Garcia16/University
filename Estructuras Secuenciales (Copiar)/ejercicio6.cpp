#include <iostream>
using namespace std;

/*6- De un trabajador se conoce su nombre, cargo, sueldo básico mensual 
se pide calcular y  mostrar el aporte a SALUD, pensión y el neto a pagar.
salud -> 4%	     Pensión -> 3.375% 

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables conocidas desde el inicio
    string nombre = "Jorge", cargo = "Ingeniero";
    int sueldo = 4700000;
    float salud, pension;

    //salida de datos
    cout<<"\tNomina\n";
    cout<<"\nNombre: "<<nombre<<endl;
    cout<<"Cargo: "<<cargo<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
    cout<<"Salud: ";

    //cálculo de salud y pensión
    salud = sueldo*4/100;
    pension = sueldo*3.375/100;

    cout<<salud<<endl;
    cout<<"Pension: "<<pension<<endl;

    return 0;
}