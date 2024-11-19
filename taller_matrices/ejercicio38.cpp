/*38. Leer dos matrices 4x6 enteras y determinar si el mayor número primo de una matriz está repetido en la otra matriz

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>
#include <math.h>

int esPrimo(int num) {
    if (num <= 1) 
    {
        return 0; //los numeros menores o iguales a 1 no son primos
    }

    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            return 0; //si tiene algun divisor no es primo
        }
    }

    return 1; //si no tiene divisores es primo
}

int main(){
    int matriz1[4][6];
    int matriz2[4][6];

    printf("Ingrese los valores para la primera matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }

    printf("Ingrese los valores para la segunda matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("posicion [%i][%i]: ", i, j);
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
    
    int mayor_primo1 = 0;
    int encontrado1 = 0; //variable para verificar si hay primos

    //encontrar el mayor primo de matriz 1
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (esPrimo(matriz1[i][j]) == 1)
            {
                if (encontrado1 == 0 || matriz1[i][j] > mayor_primo1) //solo actualizar si es el primero o es mayor
                {
                    mayor_primo1 = matriz1[i][j];
                    encontrado1 = 1;
                }
            }
        }
    }

    //encontrar el mayor primo en la matriz 2
    int mayor_primo2 = 0;
    int encontrado2 = 0; // Variable para verificar si hay primos
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (esPrimo(matriz2[i][j]) == 1)
            {
                if (encontrado2 == 0 || matriz2[i][j] > mayor_primo2) //solo actualizar si es el primero o es mayor
                {
                    mayor_primo2 = matriz2[i][j];
                    encontrado2 = 1;
                }
            }
        }
    }

    //validacion del mayor primo de matriz 1 en la matriz 2
    if (encontrado1 == 1) 
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (mayor_primo1 == matriz2[i][j])
                {
                    printf("El mayor primo (%i) de la matriz 1 esta repetido en la matriz 2\n", mayor_primo1);
                    return 0;
                }
            }
        }
    }

    //validacion del mayor primo de matriz 2 en la matriz 1
    if (encontrado2 == 1) // 
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (mayor_primo2 == matriz1[i][j])
                {
                    printf("El mayor primo (%i) de la matriz 2 esta repetido en la matriz 1\n", mayor_primo2);
                    return 0;
                }
            }
        }
    }

    printf("El mayor primo de ambas matrices no esta repetido en las dos\n");

    return 0;
}
