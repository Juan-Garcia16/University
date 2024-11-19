/*hacer un programa que ordene por filas una matriz cuadrada, minimo 5x5, los valores aleatoreos*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int matriz[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Matriz original\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz[i][j]);
        }
        printf("\n");
    }
    

    //burbuja

    for (int i = 0; i < 5; ++i) 
    {
        for (int j = 0; j < 4; ++j) 
        {
            for (int k = 0; k < 4 - j; ++k) {

                if (matriz[i][k] > matriz[i][k + 1]) {
                    int temp = matriz[i][k];
                    matriz[i][k] = matriz[i][k + 1];
                    matriz[i][k + 1] = temp;
                }
            }
        }
    }

    printf("\nMatriz ordenada\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}