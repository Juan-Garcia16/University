/*Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor

VSC ver 1.93.1 septiembre 24/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int matriz[3][4];

    printf("llene la matriz\n");

    for ( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {   
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
        
    }

    printf("\nMatriz\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    int vector[12];

    int v = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            vector[v] = matriz[i][j];
            v++;
        }
        
        }
    
    
    //metodo de burbuja

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11-i; j++)
        {
            if (vector[j] > vector[j+1])
            {
                int aux = 0;
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
            
        }    
    }
    
    printf("\nEl mayor elemento de la matriz es: %i\n", vector[11]);
    
    return 0;
}
