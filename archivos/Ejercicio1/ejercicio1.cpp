/*Ejercicio 1
Haz un programa que lea un fichero “fichero.txt” y
escriba en otro fichero “FICHERO2.TXT” el contenido del
fichero de entrada con todas las letras en mayúsculas.
Ejemplo:

fichero.txt 
Hola, mundo.
Como estamos?
Adios, adios...

FICHERO2.TXT
HOLA, MUNDO.
COMO ESTAMOS?
ADIOS, ADIOS...

VSC ver 1.93.1 octubre 16/2024          Juan Pablo García
*/
#include <stdio.h>
#include <cctype>

int main(){
    char nombre[30];

    FILE *p;
    p = fopen("fichero.txt", "r");
    if (p == NULL)
    {
        printf("Error al abrir archivo\n");
        return 1;
    }

    FILE *p2;
    p2 = fopen("FICHERO2.TXT", "w");
    if (p2 == NULL)
    {
        printf("Error al abrir archivo\n");
        return 1;
    }

    int caracter;

    while ((caracter = fgetc(p)) != EOF)
    {
        caracter = toupper(caracter);

        fputc(caracter, p2);
    }
    
    fclose(p);
    fclose(p2);

    printf("El contenido del fichero 1 ha sido copiado en el fichero 2 en formato de mayusculas.\n");
    return 0;
}