/*Crear una matriz de 4 filas y 5 columnas. Realizar la carga de componentes por
columna (es decir primero ingresar toda la primera columna, luego la segunda
columna y así sucesivamente) Imprimir luego la matriz.

VSC ver 1.93.1 septiembre 24/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int matriz[4][5];

    printf("Ingrese los valores para la matriz 4*5 por columna\n");

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("posicion [%i][%i]: ", i, j);
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
    
    return 0;
}
