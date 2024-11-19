/*17. Leer el nombre y los dos apellidos de una persona (en tres cadenas de caracteres diferentes) y unirlo
en una única cadena.

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char nom[30], apell1[30], apell2[30], completo[100];
	
	cout<<"Digite su nombre: "; 
    cin.getline(nom,30,'\n');
	cout<<"Digite su primer apellido: "; 
    cin.getline(apell1,30,'\n');
	cout<<"Digite su segundo apellido: "; 
    cin.getline(apell2,30,'\n');
	cout<<endl;
	
	strcat(nom, " ");
	strcat(apell1, " ");
	strcpy(completo,nom);
	strcat(completo,apell1);
	strcat(completo,apell2);
	
	cout<<"Su nombre completo es: "<<completo;

	return 0;
} 