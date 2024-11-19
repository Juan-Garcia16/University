/*
Diseña una función “finfichero” que reciba dos
parámetros: el primero debe ser un número entero positivo
n, y el segundo el nombre de un fichero de texto. La función
debe mostrar por pantalla las n últimas líneas del fichero.
Ejemplo:

$ finfichero(3,"cadenas.txt")
with several words
unapalabra
muuuuchas palabras, muchas, muchas...

VSC ver 1.93.1 octubre 16/2024          Juan Pablo García
*/
#include <stdio.h>
#include <stdlib.h>

void finfichero(int n,char *nombre_fichero) {
    FILE *f = fopen(nombre_fichero, "r");
    if (f == NULL) {
        printf("Error al abrir el fichero\n");
        return;
    }

    //contar el numero de lineas (forma brusca debido a falta de tiempo)
    int total_lineas = 0;
    char linea[256];

    while (fgets(linea, sizeof(linea), f) != NULL) {
        total_lineas++;
    }

    //sii el archivo tiene menos lineas que n, se ajusta n
    if (n > total_lineas) 
    {
        n = total_lineas;
    }

    //necesario para volver al principio del archivo con el puntero, ya que tras haber contado las lineas se queda en el final
    rewind(f);

    //ciclo para llegar hasta la posicion donde comienzan las n lineas
    for (int i = 0; i < total_lineas - n; i++) {
        fgets(linea, sizeof(linea), f);
    }

    //ciclo para imprimir las n lineas del final del archivo
    while (fgets(linea, sizeof(linea), f) != NULL) {
        printf("%s", linea);
    }

    fclose(f);
}

int main() {
    int n;
    char nombre[30];
    
    printf("Ingrese el número de líneas: ");
    scanf("%d", &n);

    printf("Ingrese el nombre del archivo (cadenas.txt o fichero.txt): ");
    scanf("%s", nombre);

    finfichero(n, nombre);
    return 0;
}

