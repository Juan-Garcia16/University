#include <iostream>
#include <math.h>
using namespace std;
/*
int funcion1(){
    float a, b, c, d, total = 0;
    cout<<"ingrese a: "; cin>>a;
    cout<<"ingrese b: "; cin>>b;
    cout<<"ingrese c: "; cin>>c;
    cout<<"ingrese d: "; cin>>d;

    total=(a+b)/(c+d);

    cout.precision(3);
    cout<<"El total es: "<<total<<endl;
    return 0;
}
*/
int cuadratica(){
    float a, b, c, x1=0, x2=0;
    cout<<"\tResolver cuadratica ax²+bx+c "<<endl;
    cout<<"\nA continuacion digite las constantes:"<<endl;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;

    x1=(-1*b+sqrt(pow(b,2)-4*a*c))/2*a;
    x2=(-1*b-sqrt(pow(b,2)-4*a*c))/2*a;

    cout<<"La primera solucion es: "<<x1<<endl;
    cout<<"La segunda solucion es: "<<x2<<endl;
    return 0;
}

int main(){
    //funcion1();
    cuadratica();
}