/*50. Leer una matriz 5x5 y determinar si el promedio de los elementos que se encuentran en su diagonal está almacenado en ella. Mostrar en pantalla en qué posiciones exactas se encuentra dicho dato

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    float matriz[5][5];

    printf("Ingrese los valores de la matriz\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }    
    }

    printf("\nMatriz\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    //promedio de las diagonales
    float promedio = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                promedio += matriz[i][j];
            }
            
        }    
    }
    
    promedio /= 5.0;
    int fila = 0;
    int conlumna = 0;
    int encontrado = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (promedio == matriz[i][j])
            {
                fila = i;
                conlumna = j;
                encontrado = 1;
                break;
            }
            
        }
        
    }

    if (encontrado == 1)
    {
        printf("\nEl promedio de la diagonal esta en la posicion [%i][%i] = %f\n", fila, conlumna, promedio);
    } else {
        printf("\nEl promedio de la diagonal NO esta en la matriz\n");
    }
    
    return 0;
}