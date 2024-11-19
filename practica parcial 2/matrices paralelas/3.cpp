/*
Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir el nombre alfabéticamente menor
*/
#include <stdio.h>
#include <string.h>

int main(){
    char nombres[5][30];

    printf("Ingrese el nombre de 5 personas: \n");
    for (int i = 0; i < 5; i++)
    {
        fgets(nombres[i], sizeof(nombres[i]), stdin);
        nombres[i][strcspn(nombres[i], "\n")] = '\0';
    }

    //burbuja
    char aux[30];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (strcmp(nombres[j], nombres[j+1]) > 0)
            {
                strcpy(aux, nombres[j]);
                strcpy(nombres[j], nombres[j+1]);
                strcpy(nombres[j+1], aux);
            }
            
        }
        
    }

    printf("\nEl nombre alfabeticamente menor es: %s\n", nombres[0]);

    return 0;
    
    
}