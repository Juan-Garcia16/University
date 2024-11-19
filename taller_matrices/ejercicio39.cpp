/*39. Leer dos matrices 4x6 enteras y determinar si el promedio de las “esquinas” de una matriz
es igual al promedio de las “esquinas” de la otra matriz.
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
-
    printf("Ingrese los valores de la segunda matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }

    //promedio de las esquinas de matriz 1
    int suma_esquinas1 = 0;
    suma_esquinas1 += matriz1[0][0];   
    suma_esquinas1 += matriz1[0][5];   
    suma_esquinas1 += matriz1[3][0];   
    suma_esquinas1 += matriz1[3][5];   
    float promedio1 = suma_esquinas1 / 4.0;

    //promedio de las esquinas de matriz 2
    int suma_esquinas2 = 0;
    suma_esquinas2 += matriz2[0][0];   
    suma_esquinas2 += matriz2[0][5];   
    suma_esquinas2 += matriz2[3][0];   
    suma_esquinas2 += matriz2[3][5];   
    float promedio2 = suma_esquinas2 / 4.0;


    if (promedio1 == promedio2)
    {
        printf("El promedio de las esquinas es igual en ambas matrices: %f\n", promedio1);
    } 
    else 
    {
        printf("El promedio de las esquinas NO es igual en ambas matrices.\n");
    }

    return 0;
}
