#include <iostream>
using namespace std;

int ejericio1()
{
    int a=5, b=10, c=20, r;
    r=a+b; a=c%r;
    c=b-a; a=a*2;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" r="<<r<<endl;
    cout<<"La suma de a y b es: "<<a+b<<endl;
    cout<<"----------------------------------"<<endl;
    return 0;
}

int ejercicio2()
{
    char car1='a', car2;
    car2=car1+15;
    cout<<"car2="<<car2<<endl;
    car1=car2-10;
    cout<<"car1="<<car1<<endl;
    cout<<"la suma de los dos es:"<<car1+car2<<endl;
    car1=car1-car2;
    cout<<"car1="<<car1<<endl;
    cout<<"----------------------------------"<<endl;
return 0;
}

//EJERCICIO DE OPERADORES ABREVIADOS

int ejercicio3()
{
    int a,b,c;
    a=17*5+2; //87
    cout<<"a="<<a<<endl;
    b=a++ -7; //a-7=80, luego se incrementa en 1 a
    cout<<"b="<<b<<endl;
    c=++b * --a; //se incrementa b a 81,
                //luego disminuye a a 87, luego evalua b*a
    cout<<"c="<<c<<endl;
    cout<<"----------------------------------"<<endl;
    return 0;
}

int funcion_cin()
{
    int numero;
    char car;
    float decimal;
    cout<<"escribe un numero entero"<<endl;
    cin>>numero;
    cout<<"\nel numero tecleado fue: "<<numero<<endl;
    cout<<"escribe una letra"<<endl;
    cin>>car;
    cout<<"\nla letra tecleada fue: "<<car<<endl;
    cout<<"escribe un decimal"<<endl;
    cin>>decimal;
    cout<<"\nel decimal tecleado fue: "<<decimal<<endl;
    return 0;
}

int main()
{
    ejericio1();
    ejercicio2();
    ejercicio3();
    funcion_cin();
}