#include<iostream>
using namespace std;

/*

2-. Implementar un programa recursivo que devuelva true si el número que se le pasa a
una función como parámetro es primo y false en caso contrario.

*/
bool bol_primo(int nu,int cp,int con){
	if(nu==1)
		return true;
	
	if(cp==0){
		if(con == 2){
			return true;
		}
		else{
			return false;
		}	
	}
	
	if(cp>0)
		if(nu%cp == 0)
			con+=1;
	
	cp-=1;	
	return bol_primo(nu, cp, con);
}

int main(){
	int n=0;
	
	cout<<"digite el valor que cree que es primo: ";
		cin>> n;
	
	bool t;
	t=bol_primo(n,n,0);
		if(t == false)	
			cout<<"false";
		else
			cout<<"true";
			
	
	return 0;
}
