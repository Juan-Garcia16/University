#include<iostream>
#include<conio.h>
using namespace std;

/*

4-. Escriba un programa que acepte como entrada desde teclado un número natural mayor
que 10.000 y dé como salida el resultado de sumar dos a dos los dígitos que aparecen en
posiciones simétricas respecto al dígito central dentro del número dado como entrada. Sin
usar vectores y lectura del número completo.
Por ejemplo:
para el número: 23547869
la salida es:
2 + 9 = 11,
3 + 6 = 9,
5 + 8 = 13,
4 + 7 = 11

*/
int contar(int num, int con){
    while(num>0){
        num /= 10; 
        con++;	
    }
    return con; 
}


void suma_dig(int num,int mid,int tt){
cout<<"Suma de las posiciones simetricas\n";
for (int i=0;i<mid;i++){
	int suma=0;
	int n=num;
	for(int y=1;y<=tt;y++){
			int dig=n%10;
			if(y==i+1)
				suma+=dig;
			if(y==tt-i)
				suma+=dig;
			n/=10;	
		}
		cout<<suma<<endl;		
	}
}




void suma_dig_in(int num,int mid,int tt){
cout<<"Suma de las posiciones simetricas y el valor central ya que el numero tiene posiciones imapares \n";
for (int i=0;i<mid;i++){
	int suma=0;
	int n=num;
	for(int y=1;y<=tt;y++){
			int dig=n%10;
			
			if(y== i+1)
				suma+=dig;
			if(y==tt-i)
				suma+=dig;
			n/=10;	
		}
		
		if(i+1==mid && tt-i==mid)
			cout<<suma/2;
		else
			cout<<suma<<endl;		
	}
	
}





int main(){
	int x=0;
	while(x<9999){
		cout<<"digite el numero mayor a 9999 ";
		cin>>x;
	}
	int tam=contar(x,0);
	if(tam%2 == 0)
		suma_dig(x,tam/2,tam);
	else
		suma_dig_in(x,(tam/2)+1,tam);

	getch();
	return 0;
}
