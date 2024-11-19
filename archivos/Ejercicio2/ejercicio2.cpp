/*
Haz un programa que lea dos ficheros de texto, “f1.txt” y
“f2.txt”, y escriba por pantalla las líneas que sean
distintas en cada fichero, con “< ” delante si la línea
corresponde a “f1.txt”, y “ >” si corresponde a “f2.txt”.

f1.txt 
hola, mundo.
como estamos?
adios, adios...

f2.txt
hola, mundo.
como vamos?
adios, adios...

La salida debe ser:
< como estamos?
> como vamos?

VSC ver 1.93.1 octubre 16/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

int main(){
    FILE *f1;
    FILE *f2;

    f1 = fopen("f1.txt", "r");
    f2 = fopen("f2.txt", "r");

    char linea_f1[100];
    char linea_f2[100];

    while (fgets(linea_f1, sizeof(linea_f1), f1) != NULL && fgets(linea_f2, sizeof(linea_f2), f2) != NULL)
    {
        linea_f1[strcspn(linea_f1, "\n")] = '\0';
        linea_f2[strcspn(linea_f2, "\n")] = '\0';

        if (strcmp(linea_f1, linea_f2) != 0)
        {
            printf("< %s\n", linea_f1);
            printf("> %s\n", linea_f2);
        }
        
    }

    fclose(f1);
    fclose(f2);

    return 0;    
}