#include <iostream>
#include <locale>
using namespace std;

/*Lea dos valores reales (x,y) y diga en que cuadrante del espacio cartesiano está

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    float x, y;

    //entrada de datos
    cout<<"Ingrese un valor para x: ";
    cin>>x;
    cout<<"Ingrese un valor para y: ";
    cin>>y;

    cout<<"("<<x<<","<<y<<")"<<"\n";
    
    //condiciones para el programa
    if ((x == 0) && (y == 0)){
        cout<<"El punto está en el origen del plano"<<endl;
    } else if (x == 0){
        cout<<"EL punto está en el eje Y"<<endl;
    } else if (y == 0){
        cout<<"El punto está en el eje X"<<endl;
    } else if ((x > 0) && (y > 0)){
        cout<<"El punto está en el primer cuadrante"<<endl;
    } else if ((x < 0) && (y > 0)){
        cout<<"El punto está en el segundo cuadrante"<<endl;
    } else if ((x < 0) && (y < 0)){
        cout<<"El punto está en el tercer cuadrante"<<endl;
    } else {
        cout<<"El punto está en el cuarto cuadrante"<<endl;
    }

    return 0;
}