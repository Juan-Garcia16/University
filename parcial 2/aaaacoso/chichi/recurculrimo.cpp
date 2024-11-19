#include<iostream>

using namespace std;

/*recursividad 4 descomponer en factores primos un numero*/

void alamacenar(int vec[],int a, int b, int c){
	if(a!=1){
	if(a%b==0){
		vec[c]=b;
		alamacenar(vec,a/b,b,c+1);
	}
	else{
		alamacenar(vec,a,b+1,c);
	}
}
	
}

int contar(int a,int b,int c){
	
	
if(a!=1){
	if(a%b==0){
		contar(a/b,b,c+1);
	}
	else{
		contar(a,b+1,c);
	}
}
else{
	return c;
}
}
int main(){
	
	
	int a;
	
	cout<<"ingresa el numero: ";
	cin>>a;
	
	int z;
	z=contar(a,2,0);
	int vec [z];
	
	alamacenar(vec,a,2,0);
	
	int b;
	b=0;
	
	int c;
	c=1;
	
	
	int x;
	x=1;
	
	cout<<"descomposicion de factores primos: "<<endl;
	
	while(b<z){
		
		
		
		cout<<vec[b]<<"^";
		while(vec[b]==vec[c]){
			x++;
			c++;
		}
		cout<<c<<"*";
		b=c;
		x=1;
	}
	
}
