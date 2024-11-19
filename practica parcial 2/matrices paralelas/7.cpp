/*
Cargar en una matriz los nombres de 5 países y en un vector paralelo la cantidad de
habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último,
ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir
nuevamente.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char pais[5][30];
    int habitantes[5];


    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del pais %i: ", i+1);
        fgets(pais[i], 30, stdin);
        pais[i][strcspn(pais[i], "\n")] = '\0';

        printf("\nIngrese su cantidad de habitantes; ");
        scanf("%i", &habitantes[i]);
        getchar();
    }

    //Ordenar alfabéticamente

    //burbuja alfabetica
    for (int i = 0; i < 4; i++)
    {
        char aux[30];
        int auxh = 0;
        for (int j = 0; j < 4-i; j++)
        {
            if (strcmp(pais[j],pais[j+1]) > 0)
            {
                strcpy(aux, pais[j]);
                strcpy(pais[j], pais[j+1]);
                strcpy(pais[j+1], aux);

                auxh = habitantes[j];
                habitantes[j] = habitantes[j+1];
                habitantes[j+1] = auxh;
            }
            
        }
        
    }

    printf("\nPor orden alfabetico: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s | Habitantes: %i\n", pais[i], habitantes[i]);
    }
    

    //burbuja habitantes
    for (int i = 0; i < 4; i++)
    {
        char aux[30];
        int auxh = 0;
        for (int j = 0; j < 4-i; j++)
        {
            if (habitantes[j] > habitantes[j+1])
            {
                auxh = habitantes[j];
                habitantes[j] = habitantes[j+1];
                habitantes[j+1] = auxh;

                strcpy(aux, pais[j]);
                strcpy(pais[j], pais[j+1]);
                strcpy(pais[j+1], aux);
            }
            
        }
        
    }
    
    printf("\nPor cantidad de habitantes\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%s | Habitantes: %i\n", pais[i], habitantes[i]);
    }

    return 0;
    
}