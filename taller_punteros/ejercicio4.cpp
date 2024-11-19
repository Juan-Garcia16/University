/*4-. Función C++ que reciba la dirección de inicio de una cadena de caracteres y devuelva el número de cada una de las vocales que hay en la cadena y el total.

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <iostream>
#include <string>
#include <cstring>//para utilizar strlen sin problemas
#include <cctype>
using namespace std;

void vocales(char *pcadena){
    //contadores para cada vocal y el tamaño real de la cadena
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    int tamano = strlen(pcadena);

    //Convertir toda la cadena a mayusculas para evitar errores de conteo
    for (int k = 0; k < tamano; k++)
    {
        pcadena[k] = toupper(pcadena[k]);
    }
    
    //ciclo con switch para contar vocal por vocal
    for (int j = 0; j < tamano; j++)
    {
        switch (pcadena[j])
        {
        case 'A': a++; break;
        case 'E': e++; break;
        case 'I': i++; break;
        case 'O': o++; break;
        case 'U': u++; break;
        default: break;
        }
    }
    
    //total de vocales
    int total_vocales = a+e+i+o+u;

    //resultado final en pantalla
    printf("\nHay %i a\n", a);
    printf("Hay %i e\n", e);
    printf("Hay %i i\n", i);
    printf("Hay %i o\n", o);
    printf("Hay %i u\n", u);
    printf("\nHay %i vocales en la cadena", total_vocales);
}

int main(){
    char cadena[30];
    char *pcadena = cadena;

    cout<<"Ingrese una cadena: ";
    cin.getline(cadena, sizeof(cadena));

    vocales(pcadena);

    return 0;
}