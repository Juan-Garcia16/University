/*Cargar en una matriz los nombres de 5 países y en un vector paralelo la cantidad de
habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último,
ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir
nuevamente.

VSC ver 1.93.1 septiembre 24/2024          Juan Pablo García
*/

#include <stdio.h>
#include <string.h>

void ordenar_alfabeticamente(char paises[5][31], int habitantes[5]) {
    //metodo de burbuja
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4 - i; j++) 
        {
            if (strcmp(paises[j], paises[j + 1]) > 0) 
            {
                //intercambiar nombres de paises
                char aux[31];
                strcpy(aux, paises[j]);
                strcpy(paises[j], paises[j + 1]);
                strcpy(paises[j + 1], aux);

                //intercambiar cantidad de habitantes simultaneamente
                int temp = habitantes[j];
                habitantes[j] = habitantes[j + 1];
                habitantes[j + 1] = temp;
            }
        }
    }
}

void ordenar_habitantes(char paises[5][31], int habitantes[5]) {
    //metodo de burbuja
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4 - i; j++) 
        {
            if (habitantes[j] < habitantes[j + 1]) 
            {
                //intercambiar nombres de paises
                char aux[31];
                strcpy(aux, paises[j]);
                strcpy(paises[j], paises[j + 1]);
                strcpy(paises[j + 1], aux);

                //intercambiar cantidad de habitantes simultaneamente
                int temp = habitantes[j];
                habitantes[j] = habitantes[j + 1];
                habitantes[j + 1] = temp;
            }
        }
    }
}

int main() {
    char paises[5][31];
    int habitantes[5];

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el nombre del pais: ");
        fgets(paises[i], sizeof(paises[i]), stdin);
        paises[i][strcspn(paises[i], "\n")] = '\0'; 

        printf("Ingrese la cantidad de habitantes: ");
        scanf("%d", &habitantes[i]);
        getchar();
    }

    ordenar_alfabeticamente(paises, habitantes);
    printf("\n\tPaises ordenados alfabeticamente:\n");

    for (int i = 0; i < 5; i++) {
        printf("Pais: %s| Habitantes: %d\n", paises[i], habitantes[i]);
    }

    ordenar_habitantes(paises, habitantes);
    printf("\n\tPaises ordenados por cantidad de habitantes (de mayor a menor):\n");
    for (int i = 0; i < 5; i++) {
        printf("Pais: %s| Habitantes: %d\n", paises[i], habitantes[i]);
    }

    return 0;
}
