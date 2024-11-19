/*Ejercicio 40: Leer dos matrices 5x5 enteras y determinar si el promedio entero de los elementos de la diagonal de una matriz es igual al promedio de los elementos de la diagonal de la otra matriz.
*/
#include <stdio.h>

int main(){
    int matriz1[5][5];
    int matriz2[5][5];

    printf("Ingrese los datos para la primera matriz: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }

    printf("\nMatriz 1: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nIngrese los datos para la segunda matriz: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("\nMatriz 2: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz2[i][j]);
        }
        printf("\n");
    }

    //promedio diagonal matriz 1;

    int suma_diagonal1 = 0;

    for (int i = 0; i < 5; i++)
    {
        suma_diagonal1 += matriz1[i][i];        
    }

    int promedio_diagonal1 = suma_diagonal1 / 5;

    //promedio diagonal matriz 12;

    int suma_diagonal2 = 0;

    for (int i = 0; i < 5; i++)
    {
        suma_diagonal2 += matriz2[i][i];        
    }

    int promedio_diagonal2 = suma_diagonal2 / 5;

    if (promedio_diagonal1 == promedio_diagonal2)
    {
        
        printf("El promedio de ambas diagonales es = %i", promedio_diagonal1);
    } else {
        printf("El promedio de ambas diagonales no es igual");
    }

    return 0;    
}

