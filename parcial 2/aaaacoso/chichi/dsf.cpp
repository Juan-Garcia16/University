#include<iostream>
#include<stdlib.h>
#include<time.h>

/*punto 1 ejercicio de vectores que contiene.
a)llenar el vector con elementos aleatorios
b)hallar: sumatoria y promedio de los impares, generar un nuevo vector con los multiplos del 7*/

using namespace std;


int tamano;



void siete(int vec[],int vec2[]){
	
	int a;
	int b;
	a=0;
	b=0;
	
	while(a<tamano){
		if(vec[a]%7==0){
			vec2[b]=vec[a];
			a++;
			b++;
		}
		else{
			a++;
		}
	}
}

int sumatoria(int vec[], int *prim){
	
	int a;
	a=0;
	
	int b;
	b=0;
	
	int c;
	c=0;
	
	while(a<tamano){
		if(vec[a]%2!=0){
			b=b+vec[a];
			a++;
			
			c++;
		}
		else{
			a++;
		}
	}
	*prim=c;
	return b;
}

void llenar(int vec[], int *mul){
	
	int a;
	a=0;
	
	int b;
	b=0;
	
	int c;
	c=0;
	
	while(a<tamano){
		b=rand()%101;
		if(b%7==0){
			vec[a]=b;
			a++;
			c++;
		}
		else{
			vec[a]=b;
			a++;
		}
	}
	*mul=c;
	
}



int main(){
	
	int mul;
	
	int prim;
	
	int z;
	
	int a;
	a=0;
	
	
	srand(time(NULL));
	
	cout<<"escribe la longitud del vector: ";
	cin>>tamano;
	
	int vec[tamano];
	
	llenar(vec,&mul);
	

	
	
	//----------------------------------------------------------------------------------------------
	
	cout<<"vector: "<<endl;
	
	
	while(a<tamano){
		cout<<vec[a]<<" ";
		a++;
	}
	
	
	z=sumatoria(vec,&prim);
	
	if(z==0){
		cout<<"no hay numeros impares: ";
	}
	else{
		cout<<"sumatoria de numeros impares: "<<z<<endl<<endl;
		cout<<"promedio de los numeros impares: "<<z/prim<<endl<<endl<<endl;
	}
	
	
	
	int vec2[mul];
	
	if(mul==0){
		cout<<"no hay numeros multiplos de 7: "<<endl;
		return 0;
	}
	else{
		siete(vec,vec2);
	}
	
	cout<<"...................................................................."<<endl;
	cout<<"vector de multiplos de siete: "<<endl;
	
	
	a=0;
	
	while(a<mul){
		cout<<vec2[a]<<" ";
		a++;
	}
	
	return 0;
	
	
	
	
	
}
