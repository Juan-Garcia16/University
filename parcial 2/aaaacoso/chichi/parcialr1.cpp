#include<iostream>


using namespace std;

/*recursividad 1 pide dos valores, el primero lo toma como base y el segudno como exponente, y hace la operacion correspondiente*/



int elevar(int a, int b){
	
	if(b==0){
		return 1;
	}
	else{
		return a*elevar(a, b-1);
	}
}
int main(){
	
	
	int a;
	
	int b;
	
	cout<<"ingresa el numero: ";
	cin>>a;
	
	cout<<"ingresa a que los vas a aelevar: ";
	cin>>b;
	
	cout<<"numero elevado: "<<elevar(a,b);
}
