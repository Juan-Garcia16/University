/*Realizar un programa que solicite la carga de la edad y Genero de dos personas. Luego
mostrar la edad y Genero de la persona mayor. Para almacenar el Genero definir variables
de tipo char donde se almacenará el carácter 'm' o 'f' indicando si es del Género masculino
o femenino.*/

#include <stdio.h>

int main(){
    int edad1;
    int edad2;
    char genero1;
    char genero2;

    printf("(Persona 1) Ingrese su edad: ");
    scanf("%i", &edad1);
    printf("Ingrese su genero 'm' o 'f': ");
    scanf(" %c", &genero1);
    printf("(Persona 2) Ingrese su edad: ");
    scanf("%i", &edad2);
    printf("Ingrese su genero 'm' o 'f': ");
    scanf(" %c", &genero2);

    if (edad1 > edad2)
    {
        printf("El mayor tiene ");
        printf("%i", edad1);
        printf("\nsu genero es ");
        printf("%c", genero1);
        printf("\n\n");
    } else {
        printf("El mayor tiene");
        printf("%i", edad2);
        printf("\nsu genero es");
        printf("%c", genero2);
        printf("\n\n");
    }
    
    getchar();
    return 0;


}