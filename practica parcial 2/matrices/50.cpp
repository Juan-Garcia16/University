/*
Ejercicio 50: Leer una matriz 5x5 y determinar si el promedio de los elementos que se encuentran en su diagonal está almacenado en ella. Mostrar en pantalla en qué posiciones exactas se encuentra dicho dato.
*/
/*promedio de la diagonal
verificar si el promedio esta en la matriz
mostrar en pantalla las posiciones en las que se encuentra*/
#include <stdio.h>

int main(){
    int matriz1[5][5];
    int matriz2[5][5];

    printf("Ingrese valores uno por uno para la matriz 1: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i,j);
            scanf("%i", &matriz1[i][j]);
        }   
    }

    printf("\nMatriz 1\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz1[i][j]);
        }
        printf("\n");
    }

    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += matriz1[i][i];
    }
    
    int promedio = suma / 5;
    int encontrado = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (promedio == matriz1[i][j])
            {
                printf("El promedio de la diagonal se encuentra en la posicion [%i][%i]\n", i, j);
                encontrado = 1;
            }
            
        }
        
    }

    if (encontrado)
    {
        return 0;
    } else {
        printf("\nEl promedio de la diagonal no se encuentra en la matriz\n");
    }

    return 0;

}
    
    