/*3-. programa que devuelve la posición de un carácter dentro de una cadena. Con uso de punteros,  La función recibe un puntero con la cadena y el carácter a buscar. 
Devuelve un entero con la posición en la que fue encontrado el carácter ó -1 si no se encontró.

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

int buscar_caracter(char *pcadena, char caracter){
    int tamano = strlen(pcadena);

    //si encuentra el caracter en la cadena, el ciclo se detiene y retorna la posicion tanto en en array como en memoria
    for (int i = 0; i < tamano; i++)
    {
        if (pcadena[i] == caracter)
        {
            printf("\n%c se encuentra en la posicion %i\n", caracter, i);
            printf("Su posicion en memoria es: %p\n", &pcadena[i]);
            return i;
        }    
    }

    printf("\n%c no se encuentra en la cadena\n", caracter);
    return -1;
}

int main(){
    char cadena[30];
    char *pcadena = cadena;
    char caracter;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    printf("Ingrese el caracter que desea ubicar: ");
    scanf("%c", &caracter);
    getchar();

    buscar_caracter(pcadena, caracter);

    return 0;
}