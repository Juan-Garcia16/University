#include <iostream>
using namespace std;

/* Construir un programa que permita leer un número entero de tres dígitos
y determine si tiene dígitos repetidos
*/

/*
int ejercicio1(){
    int num, du, dc, dd;
    cout<<"Ingrese un numero de 3 digitos"<<endl; cin>>num;

    if (num>99 && num<1000){
        cout<<"El numero es de 3 digitos"<<endl;
        du = num%10;
        num = num/10;
        dc = num%10;
        dd= num/10;

        cout<<"el primero es: "<<dd<<"\nel segundo es: "<<dc<<"\nel tercero es: "<<du<<endl;

        if (du == dc || du == dd || dc == dd){
            cout<<"El numero tiene digitos repetidos"<<endl;
        } else {
            cout<<"El numero NO tiene digitos repetidos"<<endl;
        }
    } else {
        cout<<"El numero no es de 3 digitos"<<endl;
    }
}
*/

/*Realice un programa, que lea de teclado un número real (n) comprendido entre 0 y 10.
El programa debe imprimir la nota asociada según el siguiente esquema:
n = 10 Matricula de Honor
entre 9 y < 10 Sobresaliente
7 < n < 9 Notable
6 < n < 7 Aprobado
0 < n < 6 Perdio
En otro caso Error*/

/*
int ejercicio2(){
    float num;
    cout<<"Ingrese un numero real entre 0 y 10: "; cin>>num;

    if ((num >= 0) && (num <= 10)){
        if (num == 10){
            cout<<"Matricula de honor"<<endl;
        } else if ((num >= 9) && (num < 10)){
            cout<<"Sobresaliente"<<endl;
        } else if ((num >= 7) && (num < 9)){
            cout<<"Notable"<<endl;
        } else if ((num >= 6) && (num < 7)){
            cout<<"Aprobado"<<endl;
        } else if ((num >= 0) && (num < 6)){
            cout<<"Perdio"<<endl;
        }
    }
    else {
        cout<<"El numero no está en el rango";
    }
    return 0;
}*/

/*Dados 3 valores enteros diferentes hallar el número medio, ejemplo: 12 18 23,
el número medio es 18.
dados tres valores hallar el número medio
Ver 5.11 26 de Agosto 2021 caos*/

int ejercicio3(){
    int a, b, c;

    cout<<"Ingrese un valor para a"; cin>>a;
    cout<<"Ingrese un valor para b"; cin>>b;
    cout<<"Ingrese un valor para c"; cin>>c;

    if ((a==b) || (a==c) || (c==b)){
        cout<<"Hay numeros repetidos, no se puede hallar el numero medio"<<endl;
    } else if ((a<b) && (a>c) || (a<c) && (a>b)){
        cout<<a<<" es el numero del medio"<<endl;
    } else if ((b>c) && (b<a) || (b<c) && (b>a)){
        cout<<b<<" es el numero del medio"<<endl;
    } else if ((c>a) && (c<b) || (c>b) && (c<a)){
        cout<<c<<" es el numero del medio"<<endl;
    }
    return 0;
}

int main(){
    //ejercicio1();
    //ejercicio2();
    ejercicio3();
}