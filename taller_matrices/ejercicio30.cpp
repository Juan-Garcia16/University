/*30. Leer una matriz 4x6 entera y determinar cuántas veces está en ella el número menor.

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int matriz[4][6];
    int menor;
    int count = 0;

    printf("Ingrese los valores para la matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\nMatriz\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    

    //hallar el numero menor
    menor = matriz[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }

    //contar cuantas veces esta el numero en la matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (matriz[i][j] == menor)
            {
                count++;
            }
        }
    }

    printf("El numero menor es %i y aparece %i veces en la matriz.\n", menor, count);

    return 0;
}
