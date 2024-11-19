/*
Ejercicio 39: Leer dos matrices 4x6 enteras y determinar si el promedio de las "esquinas" de una matriz es igual al promedio de las "esquinas" de la otra matriz.
*/
#include <stdio.h>

int main(){
    int matriz1[4][6];
    int matriz2[4][6];

    printf("Ingrese los datos para la primera matriz: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }

    printf("\nMatriz 1: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i  ", matriz1[i][j]);
        }
        printf("\n");
    }

    int suma1 = matriz1[0][0] + matriz1[0][5] + matriz1[3][0] + matriz1[3][5];
    int promedio1 = suma1 / 4;

    printf("\nIngrese los datos para la segunda matriz: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("\nMatriz 2: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i  ", matriz2[i][j]);
        }
        printf("\n");
    }

    int suma2 = matriz2[0][0] + matriz2[0][5] + matriz2[3][0] + matriz2[3][5];
    int promedio2 = suma2 / 4;

    if (promedio1 == promedio2)
    {
        printf("\nEl promedio de las esquinas de ambas matrices es = %i\n", promedio1);
    } else {
        printf("\nEl promedio de las esquinas de ambas matrices no son iguales\n");
    }
    
    return 0;
}