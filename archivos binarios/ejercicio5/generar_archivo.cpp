#include <stdio.h>
#include <string.h>

struct Alumno {
    char dni[10];
    char apellidos[40];
    char nombre[20];
    int turno;
};

int main() {
    FILE *archivo;
    struct Alumno alumnos[6] = {
        {"123456789", "Garcia Lopez", "Juan", 7},
        {"987654321", "Perez Martinez", "María", 8},
        {"456789123", "Rodriguez Sanchez", "Ana", 7},
        {"142674893", "Cardenas Orozco", "Pedro", 4},
        {"452179354", "Cadavid Torres", "Pablo", 9},
        {"789512387", "Velasquez Perez", "David", 3}
    };

    // Abrir el archivo binario "alumnos.dat" para escritura
    archivo = fopen("alumnos.dat", "wb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Escribir los registros de los alumnos en el archivo
    fwrite(alumnos, sizeof(struct Alumno), 6, archivo);

    // Cerrar el archivo
    fclose(archivo);

    printf("Archivo alumnos.dat creado con éxito.\n");
    return 0;
}

