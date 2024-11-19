/*37. Leer dos matrices 4x6 enteras y determinar si el número mayor de una matriz se encuentra en la misma posición exacta en la otra matriz.

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int matriz1[4][6];
    int matriz2[4][6];
    
    printf("Ingrese los valores de la primera matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }

    printf("Ingrese los valores de la segunda matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("\nMatriz 1\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i ", matriz1[i][j]);
        }
        printf("\n");
    }

        printf("\nMatriz 2\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i ", matriz2[i][j]);
        }
        printf("\n");
    }
    

    //hallar el numero mayor en la primera matriz
    int mayor1 = matriz1[0][0];
    int fila1 = 0, columna1 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (matriz1[i][j] > mayor1)
            {
                mayor1 = matriz1[i][j];
                fila1 = i;
                columna1 = j;
            }
        }
    }

    //hallar el numero mayor en la segunda matriz
    int mayor2 = matriz2[0][0];
    int fila2 = 0, columna2 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (matriz2[i][j] > mayor2)
            {
                mayor2 = matriz2[i][j];
                fila2 = i;
                columna2 = j;
            }
        }
    }

    //se compara si los dos numeros mayores estan en la misma posicion
    if (fila1 == fila2 && columna1 == columna2 && mayor1 == mayor2)
    {
        printf("El numero mayor de ambas matrices es %i estan en la posicion: [%i][%i]\n", matriz1[fila1][columna1],fila1, columna1);
    } 
    else 
    {
        printf("El numero mayor de ambas matrices NO esta en la misma posicion.\n");
    }

    return 0;
}
