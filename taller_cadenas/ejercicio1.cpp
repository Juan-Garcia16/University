/*1. Escribir un programa que lea una frase carácter a carácter utilizando scanf.

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include <stdio.h>

int main(){
    char caracter;

    printf("Introduzca una frase (presione Enter para finalizar):\n");

    while (true){
        caracter = getchar();//lectura caracter a caracter

        if (caracter == '\n'){//salida del bucle al presionar enter
            break;
        }    
    }

    printf("%c", caracter);
    printf("\n");

    return 0;
}
