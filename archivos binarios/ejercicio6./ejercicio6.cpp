/*Ejercicio 6
Dado el fichero “alumnos.dat” del ejercicio anterior, haz
un programa que pase a mayúsculas el nombre y los
apellidos del quinto alumno del fichero, y lo vuelva a escribir
en el fichero.

VSC ver 1.93.1 octubre 23/2024          Juan Pablo García
*/
#include <stdio.h>
#include <cctype>

struct Alumno {
    char dni[10];
    char apellidos[40];
    char nombre[20];
    int turno;
};

void mayusculas(char *cadena){
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        cadena[i] = toupper(cadena[i]);
    }
    

}

int main(){
    struct  Alumno alumnos;

    FILE *archivo;
    int pos = 4;

    archivo = fopen("../ejercicio5/alumnos.dat", "rb+");//.. para ir al directorio anterior

    fseek(archivo, pos * sizeof(struct Alumno), SEEK_SET);

    fread(&alumnos, sizeof(struct Alumno), 1, archivo);
    
    mayusculas(alumnos.nombre);
    mayusculas(alumnos.apellidos);

    fseek(archivo, pos * sizeof(struct Alumno), SEEK_SET);

    fwrite(&alumnos, sizeof(struct Alumno), 1, archivo);

    fclose;

    return 0;
}
