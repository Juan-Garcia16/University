/*Diseña un programa que construya el fichero
“alumnos.dat” a partir de un fichero de texto “alu.txt”
en el que cada dato (dni, nombre, etc) está en una línea
distinta. Ten en cuenta que en el fichero de texto el dni,
nombre y apellidos pueden ser más largos que los tamaños
especificados para el fichero binario, en cuyo caso se
deben recortar.

VSC ver 1.93.1 octubre 23/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //para poder convertir texto a entero con atoi

struct Alumno {
    char dni[10];
    char apellidos[20];
    char nombre[40];
    int turno;
};

void recortarCadena(char *cadena, int tamano) {
    if (strlen(cadena) > tamano) {
        cadena[tamano] = '\0';  //termina la cadena en el tamaño maximo permitido
    }
}

int main() {
    FILE *archivo_texto, *archivo_binario;
    struct Alumno alumno;
    char entrada[100];  //entrada temporal para leer cada linea

    archivo_texto = fopen("alu.txt", "r");
    if (archivo_texto == NULL) {
        printf("No se pudo abrir el archivo de texto\n");
        return 1;
    }

    archivo_binario = fopen("alumnos.dat", "wb");
    if (archivo_binario == NULL) {
        printf("No se pudo abrir el archivo binario\n");
        fclose(archivo_texto);
        return 1;
    }

    //lectura de datos del archivo de texto y escritura en el archivo binario
    while (fgets(entrada, sizeof(entrada), archivo_texto)) {
        //DNI
        entrada[strcspn(entrada, "\n")] = 0;  //eliminar el salto de linea
        recortarCadena(entrada, 9);//
        strcpy(alumno.dni, entrada);

        //apellidos
        fgets(entrada, sizeof(entrada), archivo_texto);
        entrada[strcspn(entrada, "\n")] = 0;
        recortarCadena(entrada, 19);
        strcpy(alumno.apellidos, entrada);

        //nombre
        fgets(entrada, sizeof(entrada), archivo_texto);
        entrada[strcspn(entrada, "\n")] = 0;
        recortarCadena(entrada, 39);
        strcpy(alumno.nombre, entrada);

        //turno
        fgets(entrada, sizeof(entrada), archivo_texto);
        alumno.turno = atoi(entrada); //convierte el turno de texto a entero

        //escribir el alumno en el archivo binario
        fwrite(&alumno, sizeof(struct Alumno), 1, archivo_binario);
    }

    fclose(archivo_texto);
    fclose(archivo_binario);

    printf("Archivo binario 'alumnos.dat' creado exitosamente.\n");

    return 0;
}
