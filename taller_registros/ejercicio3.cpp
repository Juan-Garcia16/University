/*3-. Hacer un programa para registrar los datos de cinco libros con la estructura: título, autor, fecha y tema del libro. El tema se deberá hacer mediante una enumeración.

enum Tema{ novela, poesía, sistemas, numerología, Otro };

VSC ver 1.93.1 octubre 9/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

enum Tema{ novela, poesia, sistemas, numerologia, Otro };

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

typedef struct 
{
    char titulo[30];
    char autor[30];
    Fecha fecha;
    Tema tema;
    
} reg_libros;

int main(){
    reg_libros libros[5];

    printf("\tRegistro de 5 libros\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nNombre de libro: ");
        fgets(libros[i].titulo, sizeof(libros[i].titulo), stdin);
        libros[i].titulo[strcspn(libros[i].titulo, "\n")] = '\0';

        printf("Nombre de autor: ");
        fgets(libros[i].autor, sizeof(libros[i].autor), stdin);
        libros[i].autor[strcspn(libros[i].autor, "\n")] = '\0';

        printf("Fecha de publicacion: ");
        printf("\nDia: "); scanf("%i", &libros[i].fecha.dia); getchar();
        printf("Mes: "); scanf("%i", &libros[i].fecha.mes); getchar();
        printf("Año: "); scanf("%i", &libros[i].fecha.anio); getchar();

        printf("Tema del libro (seleccione por su numero): ");
        printf("\n0 -> novela \n1 -> poesia \n2 -> sistemas \n3 -> numerologia \n4 -> otro\n");

        int tema_seleccionado;
        scanf("%i", &tema_seleccionado);
        getchar();

        switch (tema_seleccionado)
        {
        case 0: libros[i].tema = novela; break;
        case 1: libros[i].tema = poesia; break;
        case 2: libros[i].tema = sistemas; break;
        case 3: libros[i].tema = numerologia; break;
        case 4: libros[i].tema = Otro; break;
        default : printf("\nNo existe la opcion, se asigna 'otro'\n");
                libros[i].tema = Otro; break;
        }
        printf("\n");
    }
    printf("\n");

    //muestra de los registros
    for (int i = 0; i < 5; i++)
    {
        printf("Titulo: %s", libros[i].titulo);
        printf("\nAutor: %s", libros[i].autor);
        printf("\nFecha: %i/%i/%i", libros[i].fecha.dia, libros[i].fecha.mes, libros[i].fecha.anio);
        printf("\nTema: ");

        switch (libros[i].tema)
        {
            case novela: printf("Novela"); break;
            case poesia: printf("Poesia"); break;
            case sistemas: printf("Sistemas"); break;
            case numerologia: printf("Numerologia"); break;
            case Otro: printf("Otro");
        }

        printf("\n--------------------------------------\n");    
    }
    
    return 0;
}

