/*12. Escribir un programa que cuente el número de palabras en un texto

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char frase[100];
	string num = " ";
    int cant_palabras = 0, longitud;
    
    cout << "Ingrese una frase: "; 
    cin.getline(frase,100,'\n'); 
    longitud = strlen(frase);

    //ciclo para contar la cantidad de palabras a partir de los espacios
    for (int i=0; i < longitud; i++){
        if (frase[i] == ' ' and frase[i + 1] != ' ') {
            cant_palabras += 1;
        }
    }
    cout << "La frase ingresada tiene " << cant_palabras + 1 << " palabras." << endl;
    
    return 0;
} 