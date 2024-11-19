/*Hacer una estructura que ingrese los  datos de cinco personas con los siguientes campos: Nombre, apellido, edad, género y teléfono, y mostrar los nombre de los mayores de edad.

VSC ver 1.93.1 octubre 9/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nombre[30];
    char apellido[30];
    int edad;
    char genero[30];
    int telefono;
}Tpersonas;

int main(){
    Tpersonas personas[5];

    printf("\tIngresar los datos de 5 personas");

    for (int i = 0; i < 5; i++)
    {
        printf("\nIngrese nombre: ");
        fgets(personas[i].nombre, sizeof(personas[i].nombre), stdin);
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = '\0';

        printf("Ingrese apellido: ");
        fgets(personas[i].apellido, sizeof(personas[i].apellido), stdin);
        personas[i].apellido[strcspn(personas[i].apellido, "\n")] = '\0';

        printf("Ingrese edad: ");
        scanf("%i", &personas[i].edad);
        getchar();

        printf("Ingrese genero: ");
        fgets(personas[i].genero, sizeof(personas[i].genero), stdin);
        personas[i].genero[strcspn(personas[i].genero, "\n")] = '\0';

        printf("Ingrese telefono: ");
        scanf("%i", &personas[i].telefono);
        getchar();
        
        printf("\n");
    }

    //verficacion mayor de edad
    int mayores = 0;
    for (int i = 0; i < 5; i++)
    {
        if (personas[i].edad >= 18)
        {
            printf("%s es mayor de edad\n", personas[i].nombre);
            mayores++;
        }    
    }
    
    if (mayores == 0)
    {
        printf("\nNo hay mayores de edad");
    }
    
    return 0;
}
