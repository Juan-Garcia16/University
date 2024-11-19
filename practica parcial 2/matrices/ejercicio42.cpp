/*
Ejercicio 42: Leer dos matrices 5x5 enteras y determinar si el promedio entero de los números primos de una matriz se encuentra almacenado en la otra matriz.
*/
#include <stdio.h>

int esprimo(int num){
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;

    for (int i = 5; i*i <= num; i+=6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return 0;
        }    
    }
    return 1;
}

int main(){
    int matriz1[5][5];
    int matriz2[5][5];

    printf("Ingrese los datos para la primera matriz: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }

    printf("\nMatriz 1: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nIngrese los datos para la segunda matriz: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("\nMatriz 2: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz2[i][j]);
        }
        printf("\n");
    }


    //promedio de los primos de la matriz 1
    int suma1 = 0;
    int contador1 = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (esprimo(matriz1[i][j]))
            {
                suma1 += matriz1[i][j];
                contador1++;
            }    
        }
    }

    int promedio1 = suma1 /contador1;

    //promedio de los primos de la matriz 2
    int suma2 = 0;
    int contador2 = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (esprimo(matriz2[i][j]))
            {
                suma2 += matriz2[i][j];
                contador2++;
            }    
        }
    }

    int promedio2 = suma2 /contador2;

    //verificacion promedio primos 1 en matriz 2
    int encontrado1 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (promedio1 == matriz2[i][j])
            {
                encontrado1 = 1;
                break;
            }    
        }    
    }
    
    //verificacion promedio primos 2 en matriz 1
    int encontrado2 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (promedio2 == matriz1[i][j])
            {
                encontrado2 = 1;
                break;
            }    
        }    
    }

    //confirmacion final

    if (encontrado1 == 0 && encontrado2 == 0)
    {
        printf("\nEl promedio de los primos en ambas matrices no se encuentran en la otra\n");
    }
    

    if (encontrado1)
    {
        printf("\nEl promedio de los primos en matriz 1 %i se encuentra en la matriz 2\n", promedio1);
    }

    if (encontrado2)
    {
        printf("\nEl promedio de los primos en matriz 2 %i se encuentra en la matriz 1\n", promedio2);
    }

    return 0;
}