#include<iostream>


using namespace std;

/*recursividad 2 el numero binario del valor ingresado por teclado por el ususario*/


int binario(int a){
	
	
	if(a!=0){
		binario(a/2);
		cout<<a%2;
	}
}

int main(){
	
	int a;
	int perra;
	
	cout<<"ingresa el numero porfis: ";
	cin>>a;
	
	binario(a);
	
	
}
