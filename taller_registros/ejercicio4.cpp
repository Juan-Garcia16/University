/*4-. Con base en la siguiente estructura:

struct {       

    char nombre[80];
    int edad;        
    float peso;
    struct fecha fecha_nac; 
}

Elaborar un programa que muestre diferentes opciones de manejo tipo menú, con los registros creados mínimo 10.

VSC ver 1.93.1 octubre 9/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct persona{       

    char nombre[80];
    int edad;        
    float peso;
    struct fecha fecha_nac; 
};
int main(){
    struct persona personas[10];

    printf("\tRegistro de 10 personas\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese nombre: ");
        fgets(personas[i].nombre, sizeof(personas[i].nombre), stdin);
        personas[i].nombre[strcspn(personas[i].nombre, "\n")] = '\0';

        printf("Ingrese edad: ");
        scanf("%i", &personas[i].edad);
        getchar();

        printf("Ingrese peso: ");
        scanf("%f", &personas[i].peso);
        getchar();

        printf("Fecha de consulta: ");
        printf("\nDia: "); scanf("%i", &personas[i].fecha_nac.dia); getchar();
        printf("Mes: "); scanf("%i", &personas[i].fecha_nac.mes); getchar();
        printf("Año: "); scanf("%i", &personas[i].fecha_nac.anio); getchar();
    }
    
    int opcion_menu = 0;
    //Menu
    printf("\nMenu de opciones (seleccione por numero)\n");
    printf("1.Ver mayores de edad\n2.Ver quienes cumplen en diciembre\n3.Ver quienes pesan mas de 60kg\n");
    scanf("%i", &opcion_menu);

    int mayores = 0;
    int cumplen = 0;
    int peso_mayor = 0;

    switch (opcion_menu)
    {
    case 1:     
    for (int i = 0; i < 10; i++)
    {
        if (personas[i].edad >= 18)
        {
            printf("%s es mayor de edad\n", personas[i].nombre);
            mayores++;
        }    
    }
    if (mayores == 0)
    {
        printf("\nNo hay mayores de edad\n");
    }; break;

    case 2:
    for (int i = 0; i < 10; i++)
    {
        if (personas[i].fecha_nac.mes == 12)
        {
            printf("%s Cumple años en diciembre\n", personas[i].nombre);
            cumplen++;
        }    
    }
    if (cumplen == 0)
    {
        printf("\nNinguno cumple en diciembre\n");
    }; break;

    case 3:
    for (int i = 0; i < 10; i++)
    {
        if (personas[i].peso > 60.0)
        {
            printf("%s pesa mas de 60 kg\n", personas[i].nombre);
            peso_mayor++;
        }    
    }
    if (peso_mayor == 0)
    {
        printf("\nNinguno pesa mas de 60 kg\n");
    }; break;

    default : printf("\nOpcion no valida\n"); break;
    }

    return 0;
}