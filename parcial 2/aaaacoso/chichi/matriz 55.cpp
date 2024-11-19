#include<iostream>
#include<time.h>
#include<stdlib.h>
/*punto 4 realizar un programa que ordene por filas una matriz de 5x5*/
using namespace std;

void ordenar(int matriz[5][5]){
	int a;
	int b;
	int c;
	int aux;
	a=0;
	b=0;
	c=0;
	aux=0;
	
	while(a<5){
		while(b<5){
			while(c<5){
			if(matriz[a][b]>matriz[a][c]){
				aux=matriz[a][b];
				matriz[a][b]=matriz[a][c];
				matriz[a][c]=aux;
				c++;
				}
				else{
					c++;
				}
			}
			b++;
			c=b;
		}
		a++;
		b=0;
		c=0;
	}
}

void llenar(int matriz[5][5]){
	
	int a;
	int b;
	a=0;
	b=0;
	
	while(a<5){
		while(b<5){
			matriz[a][b]=rand()%101;
			b++;
			
		}
		a++;
		b=0;
	}
}
int main(){
	srand(time(NULL));
	
	int matriz[5][5];
	
	
	llenar(matriz);
	
	int a;
	int b;
	a=0;
	b=0;
	
	ordenar(matriz);
	
	while(a<5){
		cout<<"fila numero ["<<a+1<< "]";
		while(b<5){
			cout<<matriz[a][b]<<" ";
			b++;
		}
		cout<<endl;
		a++;
		b=0;
	}
}
