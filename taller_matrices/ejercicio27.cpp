/*27. Leer dos matrices 4x5 enteras y determinar si la cantidad de números primos almacenados en una matriz es igual a la cantidad de números primos almacenados en la otra matriz

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>
#include <math.h>

int esPrimo(int num) {
    if (num <= 1) 
    {
        return 0; //lo numeros menores o iguales a 1 no son primos
    }

    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            return 0; //si tiene algun divisor no es primo
        }
    }

    return 1; //si no tiene divisores, es primo
}

int main(){
    int matriz1[4][5];
    int matriz2[4][5];
    int primos1 = 0;
    int primos2 = 0;

    printf("Ingrese los valores para la primera matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
        
    }

        printf("Ingrese los valores para la segunda matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
        
    }

    printf("\nMatriz 1\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i ", matriz1[i][j]);
        }
        printf("\n");
    }

        printf("\nMatriz 2\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i ", matriz2[i][j]);
        }
        printf("\n");
    }

    //cantidad de primos
        for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (esPrimo(matriz1[i][j]) == 1)
            {
                primos1++;
            }
            if (esPrimo(matriz2[i][j]) == 1)
            {
                primos2++;
            }           
        }
    
    }

    if (primos1 == primos2)
    {
        printf("\nAmbas matrices tienen %i numeros primos\n", primos1);
    } else {
        printf("\nLas matrices no tienen la misma cantidad de numeros primos\n");
    }
    
    return 0;   
}