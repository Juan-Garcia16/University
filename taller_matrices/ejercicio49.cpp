/*49. Leer una matriz 3x3 entera y determinar si el promedio de todos los datos almacenados en ella se encuentra también almacenado.

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    float matriz[3][3];

    printf("Ingrese los valores de la matriz\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }    
    }

    printf("\nMatriz\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
    

    //promedio de todos los numeros de la matriz
    float promedio = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            promedio += matriz[i][j];
        }
        
    }
    
    promedio /= 9.0;

    //busqueda del promedio
    int encontrado = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (promedio == matriz[i][j])
            {
                encontrado = 1;
                break;//para optimizar memoria
            }
            
        }
        
    }

    if (encontrado == 1)
    {
        printf("\nEl promedio de todos los datos esta dentro de la matriz: %f\n", promedio);
    } else {
        printf("\nEl promedio de todos los datos NO esta dentro de la matriz\n");
    }
    
    return 0;    
}