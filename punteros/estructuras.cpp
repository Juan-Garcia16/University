/*
Ejercicio Práctico

Aquí tienes un ejercicio para practicar:

Ejercicio: Crea una estructura llamada Libro que contenga los siguientes miembros: titulo (cadena de caracteres), autor (cadena de caracteres), y anio (entero). Luego, declara una variable de tipo Libro, asigna valores a sus miembros y muestra estos valores en la consola.

Si necesitas más ayuda o ejemplos, ¡no dudes en preguntar!
*/

/*
#include <stdio.h>
#include <string.h>

typedef struct Tlibro
{
    char titulo[30];
    char autor[30];
    int anio;
} libro;


int main(){
    libro referencia;

    printf("Ingrese el titulo del libro: ");
    fgets(referencia.titulo, sizeof(referencia.titulo), stdin);
    referencia.titulo[strcspn(referencia.titulo, "\n")] = '\0';

    printf("\nIngrese el nombre de autor: ");
    fgets(referencia.autor, sizeof(referencia.autor), stdin);
    referencia.autor[strcspn(referencia.autor, "\n")] = '\0';

    printf("\nIngrese el año de publicacion: ");
    scanf("%i", &referencia.anio);

    printf("\nTitulo: %s", referencia.titulo);
    printf("\nAutor: %s", referencia.autor);
    printf("\nAnio de publicacion: %i\n", referencia.anio);

    return 0;
}
*/
//------------------------------------------------
/*
Ejercicio: Gestión de Libros

Descripción: Crea un programa que gestione una lista de libros utilizando una estructura. Deberás permitir al usuario ingresar varios libros y luego mostrar la información de cada uno.

Instrucciones:

Define una estructura llamada Tlibro que contenga los siguientes campos:
char titulo[30]: para almacenar el título del libro.
char autor[30]: para almacenar el autor del libro.
int anio: para almacenar el año de publicación del libro.
En la función main:
Pide al usuario cuántos libros desea ingresar.
Usa malloc para crear un arreglo dinámico de estructuras Tlibro según la cantidad ingresada por el usuario.
Usa punteros para permitir al usuario ingresar los detalles de cada libro.
Finalmente, muestra la información de todos los libros ingresados.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Tlibro
{
    char titulo[30];
    char autor[30];
    int anio;
} libro;

int main(){
    int cantidad_libros;

    printf("Cuantos libros desea ingresar?: ");
    scanf("%i", &cantidad_libros);
    getchar();

    libro *biblioteca = (libro*) malloc(sizeof(libro)*cantidad_libros);

    if (biblioteca == NULL)
    {
        printf("Error al asignar memoria\n");
        return 1;
    }

    for (int i = 0; i < cantidad_libros; i++)
    {
        printf("Ingrese el titulo del libro %i: ", i+1);
        fgets(biblioteca[i].titulo, sizeof(biblioteca[i].titulo), stdin);
        biblioteca[i].titulo[strcspn(biblioteca[i].titulo, "\n")] = '\0';

        printf("Ingrese el nombre del autor %i: ", i+1);
        fgets(biblioteca[i].autor, sizeof(biblioteca[i].autor), stdin);
        biblioteca[i].autor[strcspn(biblioteca[i].autor, "\n")] = '\0';

        printf("Ingrese el anio de publicacion %i: ", i+1);
        scanf("%i", &biblioteca[i].anio);    
        getchar();

        printf("\n");
    }
    
    //mostrar informacion
    for (int i = 0; i < cantidad_libros; i++)
    {
        printf("\n\tLibro %i\n", i+1);
        printf("Titulo: %s", biblioteca[i].titulo);
        printf("\nAutor: %s", biblioteca[i].autor);
        printf("\nanio: %i\n", biblioteca[i].anio);
        printf("------------------------------------");
    }
    
    free(biblioteca);

    return 0;
}