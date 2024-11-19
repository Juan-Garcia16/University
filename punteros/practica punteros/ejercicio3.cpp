/*
3-. Sea A una matriz de tamaño nxn, implemente un programa que dado un menú de opciones resuelva:  por ejemplo La transpuesta de A (At). Si A es simétrica.  Mostrar los elementos triangular superior o triangular inferior. O otras tres situaciones que se quieran realizar con matrices, con uso de punteros.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamano;

    printf("Ingrese el tamano para la matriz nxn: ");
    scanf("%i", &tamano);


    int **matriz = (int**) malloc(sizeof(int)*tamano);

    //reservar memoria para cada fila
    for (int i = 0; i < tamano; i++)
    {
        matriz[i] = (int*) malloc(sizeof(int)*tamano);
    }
    
    printf("Ingrese los valores para la matriz: \n");

    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }    
    }

    printf("\tMatriz\n");

    for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
    
}