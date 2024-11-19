/*
Dado un fichero binario “alumnos.dat” que tiene registros
de alumnos, con la siguiente información por cada alumno:
dni vector de 10 caracteres
apellidos vector de 40 caracteres
nombre vector de 20 caracteres
turno entero
Haz un programa que imprima por pantalla el DNI de todos
los alumnos del turno 7.
Ampliación: haz un programa que intercambie los alumnos
de los turnos 4 y 8 (los turnos van del 1 al 10).

VSC ver 1.93.1 octubre 23/2024          Juan Pablo García
*/
#include <stdio.h>

struct Alumno {
    char dni[10];
    char apellidos[40];
    char nombre[20];
    int turno;
};

int main (){
    //estructura base para buscar en el archivo (debe ser la misma con que fue creado)
    struct  Alumno alumnos;

    FILE *archivo;
    //abrir archivo en modo lectura
    archivo = fopen("alumnos.dat", "rb");

    //verificacion al abrir
    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo\n");
        return 0;
    }
    
    //busqueda de quienes tengan turno 7 por cada registro
    while (fread(&alumnos, sizeof(struct  Alumno), 1, archivo))
    {
        if (alumnos.turno == 7)
        {
            printf("DNI del alumno en turno 7: %s\n", alumnos.dni);
        } 
        
    };

    fclose(archivo);

    return 0;
}
