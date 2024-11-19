/*
3-. Implementar un programa recursivo al que se le pase como parámetro de función un
número en base 2 (binario), leído por teclado, se debe validar que no se escriban números
diferentes de 0 y 1, y se debe devolver el equivalente en base 10 (decimal) y en base 8
(octal).

*/
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
bool validar_bin(int bi){
	
	if(bi==0){
		return true;
	}
	
	int y=bi%10;
	if(y!=1 && y!=0)
		return false;
	
	
	return validar_bin(bi/10);
}

int deci_(int nu,int poe,int sum){
	int y=nu%10;
	if(poe==1)
		sum+= y*poe;
	else
		sum+=y * pow(2,poe-1); 
	
	nu/=10;
	if(nu>0){
		return deci_(nu, poe+1 ,sum) ;	
	}
	else{
		cout<<"\nSu numero en base 10 es :"<<sum;
		return sum;
	}	
	
	
	
}

void octal(int nu ,int v[],int i){
	if(nu/8>8){
		v[i]=nu%8;
		octal(nu/8 , v , i++);
	}
	else{
		v[i]=nu%8;
		i++;
		v[i]=nu/8;
		cout<<"\nSu numero en octal es: ";
		for(;i>=0;i--){
			cout<<v[i];
		}
	}
	
}
	

int main(){
	int x,voc[100];
	bool t=false;
	while(t==false){
		cout<<"Digite su numero en base binaria (1 o 0) ";
			cin>>x;	
		t=validar_bin(x);
	}

	int dec=deci_(x,1,0);
	octal(dec,voc,0);
	getch();
	return 0;
}
