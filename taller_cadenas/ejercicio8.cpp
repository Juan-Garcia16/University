/*8. Sustituir todos los espacios en blanco de una frase por un asterisco

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include <iostream>
#include<string.h>
using namespace std;

int main(){
    char frase [100];
    int longitud, espacio;
    
    cout <<"Ingrese una frase: "; 
    cin.getline(frase, 100,'\n');
	longitud = strlen(frase);
	
    //ciclo para remplazar los espacios por *
    for(int i=0; i<longitud; i++){
        if(frase[i]== ' '){
            frase[i] = '*';
		}
	}

    cout<<frase<<endl;
    return 0;
} 