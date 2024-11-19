#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
/*punto 2 crear un programa que lea la fecuencia de numeros en un vector.
a)llenar el vector de elementos aleatorios, luego ordenar por cualquier metodo*
b)mostrar la frecuencia de cada numero */


int tamano;

int contar (int vec[]){
	int a;
	int b;
	int c;
	a=0;
	b=0;
	c=0;
	
	while(a<tamano){
		if(vec[a]==vec[b]){
			b++;
		}
		else{
			c++;
			a=b;
		}
	}
	return c;
}
void mostrar (int vec[], int vec2[]){
	
	int a;
	int b;
	int c;
	int z;
	a=0;
	b=0;
	c=0;
	z=0;
	
	while(a<tamano){
		if(vec[a]==vec[b]){
			b++;
			c++;
		}
		else{
			vec2[z]=c;
			cout<<"frecuencia del numero: "<<vec[a]<<" ....."<<c<<endl;
			a=b;
			c=0;
			z++;
		}
	}
}

int ordenar(int vec[]){
	int a;
	
	int b;
	
	int aux;
	a=0;
	b=0;
	aux=0;
	
	while(a<tamano){
		while(b<tamano){
			if(vec[a]>vec[b]){
				aux=vec[a];
				vec[a]=vec[b];
				vec[b]=aux;
				b++;
			}
			else{
				b++;
			}
			
		}
		a++;
		b=a;
	}
}


int llenar (int vec[]){
	int a;
	a=0;
	
	while(a<tamano){
		vec[a]=rand()%101;
		a++;
		
	}
}


int main(){
	
	srand(time(NULL));
	
	cout<<"ingresa la longitud del vector: "<<endl;
	cin>>tamano;
	
	int vec[tamano];
	
	llenar(vec);
	ordenar(vec);
	int vec2[contar(vec)];
	mostrar(vec,vec2);cout<<endl;
	
	int a;
	a=0;
	
	cout<<"vector: "<<endl;

    while(a<tamano){
    	cout<<vec[a]<<endl;
    	a++;
	}
	
	a=0;
	cout<<"frecuencias: "<<endl;
	while(a<contar(vec)){
		cout<<vec2[a]<<endl;
		a++;
	}
}
