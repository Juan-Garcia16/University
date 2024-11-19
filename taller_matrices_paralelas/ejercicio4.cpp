/*Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir el nombre alfabéticamente menor.

VSC ver 1.93.1 septiembre 24/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

int main(){
    char matriz[5][31];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre de una persona: \n");
        fgets(matriz[i], sizeof(matriz[i]), stdin);
        matriz[i][strcspn(matriz[i], "\n")] = '\0';
    }

    //metodo de burbuja
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (strcmp(matriz[j], matriz[j+1]) > 0)
            {
                char aux[31];
                strcpy(aux, matriz[j]);
                strcpy(matriz[j], matriz[j+1]);
                strcpy(matriz[j+1], aux);
            }
            
        }    
    }

    printf("El nombre alfabeticamente menor es: %s\n", matriz[0]);
    return 0;    
}