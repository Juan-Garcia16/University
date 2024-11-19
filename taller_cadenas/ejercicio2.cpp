/*2. Escribir un programa que lea una frase y posteriormente la escriba carácter a carácter utilizando printf.

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];  // Arreglo para almacenar la frase
    int i = 0;        // Índice para la posición en el arreglo
    char c;

    printf("Ingrese una frase (presione Enter para finalizar):\n");
    
    while ((c = getchar()) != '\n' && i < sizeof(frase) - 1){ //sizeof en vez de strlen porque en este momento aun no está definido el tamaño total de frase y seria igual a 0
        frase[i++] = c; // aumentar el tamaño de frase
    }

    frase[i] = '\0'; 

    // Imprimir la frase ingresada caracter a caracter
    for (i = 0; frase[i] != '\0'; i++){
        printf("%c\n", frase[i]);
    }
    
    return 0;
}

