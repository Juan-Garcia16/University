#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

/*Dados cuatro puntos en coordenadas (x,y) reales, diga si los cuatro puntos forman
un cuadrado. Suponga que los puntos son dados en orden. El programa no debe
abortar por dividir por cero

SALVEDAD: solo funciona si los puntos son digitados en orden (manecillas del reloj, hacia nderecha o izquierda)
tal como indica el enunciado.

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    float x1, y1, x2, y2, x3, y3, x4, y4, d1, d2, d3, d4, d5, d6;

    //entrada de datos
    cout<<"Para el ingreso del punto primero ingrese la coodenada en X y luego en Y"<<endl;
    cout<<"\nIngrese coordenadas para el punto 1: ";
    cin>>x1>>y1;
    cout<<"("<<x1<<","<<y1<<")";
    cout<<"\nIngrese coordenadas para el punto 2: ";
    cin>>x2>>y2;
    cout<<"("<<x2<<","<<y2<<")";
    cout<<"\nIngrese coordenadas para el punto 3: ";
    cin>>x3>>y3;
    cout<<"("<<x3<<","<<y3<<")";
    cout<<"\nIngrese coordenadas para el punto 4: ";
    cin>>x4>>y4;
    cout<<"("<<x4<<","<<y4<<")"<<endl;

    //validación para que sea un cuadrado por medio de las distancias de sus puntos
    d1 = pow(x2-x1,2) + pow(y2-y1,2);
    d2 = pow(x3-x2,2) + pow(y3-y2,2);
    d3 = pow(x4-x3,2) + pow(y4-y3,2);
    d4 = pow(x1-x4,2) + pow(y1-y4,2);
    d5 = pow(x3-x1,2) + pow(y3-y1,2);
    d6 = pow(x4-x2,2) + pow(y4-y2,2);

    //condiciones para el programa
    if (d1 == d2 && d2 == d3 && d3 == d4 && d5 ==d6){
        cout<<"\nLos puntos ingresados forman un cuadrado";
    } else {
        cout<<"\nLos puntos ingresados no forman un cuadrado";
    }
    
    return 0;
}