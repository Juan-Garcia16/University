/*Escribe un programa que se encarge de la asignación
automática de alumnos en 10 turnos de prácticas. A cada
alumno se le asignará el turno correspondiente al último
número de su DNI (a los alumnos con DNI acabado en 0 se
les asignará el turno 10). Los datos de los alumnos están
en un fichero “alumnos.dat” con la misma estructura que
en los ejercicios anteriores.
La asignación de turnos debe hacerse leyendo el fichero
una sola vez, y sin almacenarlo en memoria. En cada paso
se leerá la información correspondiente a un alumno, se
calculará el turno que le corresponde, y se guardará el
registro en la misma posición.

VSC ver 1.93.1 octubre 23/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Alumno {
    char dni[10];
    char apellidos[20];
    char nombre[40];
    int turno;
};

int obtenerTurno(const char *dni) {
    char ultimo_digito = dni[strlen(dni) - 1];
    
    //convierte el ultimo caracter a un numero
    int digito = ultimo_digito - '0';
    
    if (digito == 0) {
        return 10;
    } else {
        return digito;
    }
}

int main() {
    FILE *archivo_binario;
    struct Alumno alumno;

    archivo_binario = fopen("alumnos.dat", "rb+");
    if (archivo_binario == NULL) {
        printf("No se pudo abrir el archivo binario\n");
        return 1;
    }

    while (fread(&alumno, sizeof(struct Alumno), 1, archivo_binario)) {
        //asiga el turno acorde al ultimo digito del dni
        alumno.turno = obtenerTurno(alumno.dni);

        //retrocede el puntero para sobreescribir el dato del alumno en la misma posicion 
        fseek(archivo_binario, -sizeof(struct Alumno), SEEK_CUR);//SEEK_CUR mueve el puntero desde la posicion actual, se retroce gracias al "-"" en la cantidad de bytes

        //sobreescribe el turno
        fwrite(&alumno, sizeof(struct Alumno), 1, archivo_binario);
    }

    fclose(archivo_binario);

    printf("Asignacion de turnos completada\n");

    return 0;
}
