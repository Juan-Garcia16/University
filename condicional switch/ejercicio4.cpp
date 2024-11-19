#include <iostream>
#include <cctype>
using namespace std;

/*4-. Que muestre un menú donde las opciones sean “Equilátero”, “Isósceles” y “Escaleno”, pida una opción y calcule el perímetro del triángulo seleccionado, solicitando los datos respectivos.

Ver 5.11 agosto 23/2024          Juan Pablo García
*/

int main(){
    int opcion;
    float resultado;

    cout<<"Seleccione una opcion de triangulo para calcular perimetro. (Ingrese numero)"<<endl;
    cout<<"\n1 -> Equilatero"<<endl;
    cout<<"2 -> Isosceles"<<endl;
    cout<<"3 -> Escaleno"<<endl;
    cin>>opcion;

    switch (opcion){
        case 1 : float lado;
        cout<<"Ingrese la longitud de un lado del triangulo: ";
        cin>>lado;

        resultado = lado*3;
        cout<<"El perimetro del equilatero es: "<<resultado<<endl; break;

        case 2 : float lado_a, lado_b;
        cout<<"Ingrese la longitud del lado que es diferente: ";
        cin>>lado_a;
        cout<<"Ingrese la longitud de un lado que es repetido: ";
        cin>>lado_b;

        resultado = 2*lado_b + lado_a;
        cout<<"El perimetro del isosceles es: "<<resultado<<endl; break;

        case 3 : float lado_1, lado_2, lado_3;
        cout<<"Ingrese la longitud del lado 1: ";
        cin>>lado_1;
        cout<<"Ingrese la longitud del lado 2: ";
        cin>>lado_2;
        cout<<"Ingrese la longitud del lado 3: ";
        cin>>lado_3;

        resultado = lado_1 + lado_2 + lado_3;
        cout<<"EL perimetro del escaleno es: "<<resultado<<endl; break;

        default : cout<<"Opcion no valida"<<endl;
    }

    return 0;
}