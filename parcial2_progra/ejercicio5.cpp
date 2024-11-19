/* 5-. Implementar un programa recursivo que lea una secuencia de caracteres de longitud arbitraria terminada en un punto, y la imprima en orden inverso. El procedimiento no tiene parámetros. Sin usar vectores, ni arreglos de TIPO char.

VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/
#include <stdio.h>

// Funcion recursiva para leer y mostrar la cadena en orden inverso
void leer_imprimir() {
    char c = getchar(); // Leer un caracter

    if (c == '.') {
        return;
    }

    // Llamada recursiva
    leer_imprimir();

    // Imprimir el caracter despues de la llamada recursiva
    putchar(c);
}

int main() {
    printf("Ingrese una secuencia de caracteres (termine con un punto):\n");
    leer_imprimir(); // llamar a la funcion recursiva
    printf("\n");

    return 0;
}
