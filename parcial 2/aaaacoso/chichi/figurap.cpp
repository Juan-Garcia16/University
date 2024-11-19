#include<iostream>

using namespace std;

/*recursividad punto figura*/


void espacios(int a){
	
	int b;
	b=0;
	while(b<=a){
		cout<<" ";
		b++;
	}
}


void triangulo2(int a, int x, int b){
	
	if(x>=1){
	
	if(b<=x){
		cout<<"*";
		triangulo2(a,x,b+1);
	}
	else{
		cout<<endl;
		espacios(a+1);
		triangulo2(a+1,x-2,1);
	}
	}
}


void triangulo(int a, int x, int b){
	
	if(x<=9){
	
	if(b<=x){
		cout<<"*";
		triangulo(a,x,b+1);
	}
	else{
		cout<<endl;
		espacios(a-1);
		triangulo(a-1,x+2,1);
	}
	}
	else{
		espacios(a+1);
		triangulo2(a+2,x-4,1);
	}
}
int main(){
	espacios(5);
	triangulo(5,1,1);
	
	
}
