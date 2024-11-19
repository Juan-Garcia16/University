#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
/*punto 3 de una matriz de 5 rellenarla de valores aleatorios
a)hallar la sumatoria de la diagonal principal y secundaria
b)hallar la sumatoria de la triangular superior e inferior*/

int triangular2(int matriz[5][5]){
	int a;
	int b;
	int c;
	int d;
	a=0;
	b=4;
	c=0;
	d=0;
	
	while(a<5){
		if(c!=b){
			d=matriz[a][c]+d;
			c++;
		}
		else{
			a++;
			b--;
			c=0;
		}
	}
	return d;
}
int triangular(int mat[5][5]){
	
	int a;
	int b;
	int c;
	int d;
	a=0;
	b=0;
	c=0;
	d=0;
	
	while(a<5){
		if(c!=b){
			d=mat[a][c]+d;
			c++;
		}
		else{
			a++;
			b=a;
			c=0;
		}
	}
	return d;
}
int diagonal2(int matriz[5][5]){
	
	int a;
	int b;
	int c;
	
	a=0;
	b=4;
	c=0;
	
	while(a<5){
		c=matriz[a][b]+c;
		a++;
		b--;
		
		}
		return c;
	}


int diagonal(int matriz[5][5]){
int a;
int b;
int c;

a=0;
b=0;
c=0;


while (a<5){
	c=matriz[a][b]+c;
	a++;
	b++;
	}
	return c;
	
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
		b=0;
		a++;
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
	
	cout<<"diagonal principal: "<<diagonal(matriz)<<endl;
	cout<<"diagonal secundaria: "<<diagonal2(matriz)<<endl;
	cout<<"triangular la de abajo: "<<triangular(matriz)<<endl;
	cout<<"triangular la de arriba: "<<triangular2(matriz)<<endl;
	
	
	cout<<"matriz: "<<endl;
	while(a<5){
		while(b<5){
			cout<<matriz[a][b]<<" ";
			b++;
		}
		cout<<endl;
		a++;
		b=0;
	}

}
