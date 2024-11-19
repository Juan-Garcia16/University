/*Definir una matriz de 4 filas y 5 columnas. Realizar su carga e impresión.
Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la
matriz.

VSC ver 1.93.1 septiembre 24/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int matriz[4][5];

    printf("Ingrese los valores de la matriz: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
        
    }
    
    printf("\nMatriz\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    //alacenar la fila 1 en un vector
    int vector_fila1[5];

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            vector_fila1[j] = matriz[i][j];
        }    
    }

    //almacenar la fila 2 en un vector
    int vector_fila2[5];

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            vector_fila2[j] = matriz[i][j];
        }    
    }

    //cambio de filas
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = vector_fila2[j];
        }
        
    }
    
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = vector_fila1[j];
        }
        
    }
    
    printf("\nMatriz alterada\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;    
}