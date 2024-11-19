#include <iostream>
using namespace std;

int funcion1(){
    const float iva=1.19;
    int precio;
    double total;
    cout<<"Ingrese el precio del producto: "; cin>>precio;
    cout<<"\nEl valor con el iva es de: ";
    total=precio*iva;
    cout<<total<<endl;
    return 0;
}

int funcion2(){
    int edad;
    char sexo[10];
    float altura;

    cout<<"Ingrese su edad: "; cin>>edad;
    cout<<"Ingrese su sexo: "; cin>>sexo;
    cout<<"Ingrese su altura en metros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<endl;
    return 0;



}

int main(){
    funcion1();
    funcion2();
}