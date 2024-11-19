/*38. Leer dos matrices 4x6 enteras y determinar si el mayor número primo de una matriz está repetido en la otra matriz

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

    //sacar los primos de matriz 1
    int vector1[24];
    int primos_matriz1 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (esPrimo(matriz1[i][j]) == 1)
            {
                vector1[primos_matriz1] = matriz1[i][j];
                primos_matriz1++;
            }
        }
        
    }
    
    //ordenar el vetor1 de primos pasa sacar el primo mayor
    
    for (int i = 0; i < primos_matriz1; i++)//depronto cambiar el < por <=
    {
        for (int j = 0; j < primos_matriz1-i; j++)
        {
            if (vector1[i] > vector1[i+1])
            {
                int aux1 = vector1[i];
                vector1[i] = vector1[i+1];
                vector1[i+1] = aux1;
            }    
        }
        
    }

    //sacar los primos de matriz 2
    int vector2[24];
    int primos_matriz2 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (esPrimo(matriz2[i][j]) == 1)
            {
                vector2[primos_matriz2] = matriz2[i][j];
                primos_matriz2++;
            }
        }    
    }

    //ordenar el vetor2 de primos pasa sacar el primo mayor
    
    for (int i = 0; i <= primos_matriz2; i++)
    {
        //int aux2 = 0;
        for (int j = 0; j < primos_matriz2-i; j++)
        {
            if (vector2[i] > vector2[i+1])
            {   
                int aux2 = vector2[i];
                vector2[i] = vector2[i+1];
                vector2[i+1] = aux2;
            }     
        }
        
    }


    for (int i = 0; i < primos_matriz1; i++)
    {
        printf("%i ", vector1[i]);
    }
    
    for (int i = 0; i <= primos_matriz2; i++)
    {
        printf("%i ", vector2[i]);
    }





    //validacion del mayor primo de matriz 1 en la matriz 2

    for (int i = 0; i < primos_matriz2; i++)
    {
        if (vector1[primos_matriz1] == vector2[i] )
        {
            printf("El mayor primo (%i) de la matriz 1 esta repetido en la matriz 2\n", vector1[primos_matriz1]);
            return 0;
        }
        
    }

    //validacion del mayor primo de matriz 2 en la matriz 1
    
        for (int i = 0; i < primos_matriz1; i++)
    {
        if (vector2[primos_matriz2] == vector1[i] )
        {
            printf("El mayor primo (%i) de la matriz 2 esta repetido en la matriz 1\n", vector2[primos_matriz2]);
            return 0;
        }
        
    }

    //ciclo para cuando ninguno de los casos posibles se cumplen

    for (int i = 0; i < primos_matriz1; i++)
    {
        if (vector2[primos_matriz2] != vector1[i] )
        {
            printf("El mayor primo de ambas matrices no se encuentra repetido en las dos\n");
            break;
        }
        
    }


    
    

    return 0;
}