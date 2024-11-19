/*19. Leer el nombre de una persona y un carácter y comprobar si dicho carácter está en su nombre.

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char nombre[30], caracter;
	int longitud, contador;
	
	cout<<"Digite su nombre: "; 
    cin.getline(nombre,30,'\n'); 
	cout<<"Digite un caracter: "; 
    cin>>caracter; 
	cout<<endl;
	longitud = strlen(nombre);
	
	//ciclo para contar las veces que está un caracter en el nombre
	for(int i = 0; i < longitud; i++){
		if(nombre[i] == caracter){
			contador++;
		}						
	}
	
	cout<<"El caracter "<<caracter<<" aparece "<<contador<<" veces en su nombre.";

	return 0;
}