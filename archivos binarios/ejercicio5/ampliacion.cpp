/*Ampliación: haz un programa que intercambie los alumnos
de los turnos 4 y 8 (los turnos van del 1 al 10).*/
#include <stdio.h>

struct Alumno {
    char dni[10];
    char apellidos[40];
    char nombre[20];
    int turno;
};

int main() {
    struct Alumno alumno1, alumno2; // 2 para almacenar temporalmente quienes se encuentren en los turnos 
    FILE *archivo;
    int posTurno4 = -1, posTurno8 = -1; // Para definir que no se han encontrado aun
    int pos = 0;  // Para contar la posición actual de los registros en el archivo

    // Abrir el archivo en modo lectura y escritura binaria
    archivo = fopen("alumnos.dat", "rb+");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 0;
    }

    // Buscar los alumnos de los turnos 4 y 8
    while (fread(&alumno1, sizeof(struct Alumno), 1, archivo)) {
        if (alumno1.turno == 4 && posTurno4 == -1) {
            posTurno4 = pos;  // Guardar la posición del alumno con turno 4
        }
        if (alumno1.turno == 8 && posTurno8 == -1) {
            posTurno8 = pos;  // Guardar la posición del alumno con turno 8
        }
        pos++;
    }

    // Verificar si se encontraron ambos turnos
    if (posTurno4 == -1 || posTurno8 == -1) {
        printf("No se encontraron alumnos en ambos turnos.\n");
        fclose(archivo);
        return 0;
    }

    // Leer los alumnos en las posiciones encontradas
    fseek(archivo, posTurno4 * sizeof(struct Alumno), SEEK_SET); //SEEK_SET mueve el puntero del archivo al inicio mas el desplazamiento calculado que es la posicion encontrada
    fread(&alumno1, sizeof(struct Alumno), 1, archivo);  // Alumno turno 4

    fseek(archivo, posTurno8 * sizeof(struct Alumno), SEEK_SET);
    fread(&alumno2, sizeof(struct Alumno), 1, archivo);  // Alumno turno 8

    // Intercambiar las posiciones de los alumnos
    fseek(archivo, posTurno4 * sizeof(struct Alumno), SEEK_SET);
    fwrite(&alumno2, sizeof(struct Alumno), 1, archivo);  // Escribir alumno turno 8 en la posición de turno 4

    fseek(archivo, posTurno8 * sizeof(struct Alumno), SEEK_SET);
    fwrite(&alumno1, sizeof(struct Alumno), 1, archivo);  // Escribir alumno turno 4 en la posición de turno 8

    // Cerrar el archivo
    fclose(archivo);

    printf("Intercambio realizado entre los alumnos de los turnos 4 y 8.\n");

    return 0;
}
