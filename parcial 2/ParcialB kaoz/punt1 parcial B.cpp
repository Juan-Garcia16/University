/*
1-. Implementar un programa recursivo que imprima los d�gitos de un n�mero natural n,
le�do por teclado y mayor de 10000, en orden inverso. Por ejemplo, para n=10000 la salida
deber�a ser 00001.
Sin usar vectores y lectura del n�mero completo, debe funcionar para el ejemplo.
*/
#include<iostream>
#include<conio.h>
using namespace std;

void rever_(int n){
	int y= n%10;
	if(n>0){
		cout<<y;
		return rever_(n/10);
	}
}

int main (){
	int x; 
	while(x<9999){
		cout<<"digite su numero (no debe ser menor a 10000) ";
			cin>>x;
	}
	rever_(x);
	getch();	
	return 0;
}
