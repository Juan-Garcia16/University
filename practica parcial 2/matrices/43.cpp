/*Ejercicio 44: Leer dos matrices 5x5 enteras y determinar si el promedio entero de los números terminados en 4 de una matriz se encuentra al menos 3 veces en la otra matriz.
*/
/*promedio numeros termiados en 4
contar si el promedio esta al menos 3 veces en la otra*/
#include <stdio.h>

int main(){
    int matriz1[5][5];
    int matriz2[5][5];

    printf("Ingrese valores uno por uno para la matriz 1: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i,j);
            scanf("%i", &matriz1[i][j]);
        }   
    }

    printf("\nMatriz 1\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nIngrese valores uno por uno para la matriz 2: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i,j);
            scanf("%i", &matriz2[i][j]);
        }   
    }

    printf("\nMatriz 2\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ", matriz2[i][j]);
        }
        printf("\n");
    }

    //promedio numeros terminados en 4
    int suma = 0;
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz1[i][j] % 10 == 4)
            {
                suma += matriz1[i][j];
                contador++;
            }   
        }        
    }

    if (contador > 0) {
        int promedio = suma / contador;
        int contador_de_aparicion = 0;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (promedio == matriz2[i][j])
                {
                    contador_de_aparicion++;
                }   
            }    
        }

        if (contador_de_aparicion >= 3)
        {
            printf("\nEl promedio de los numeros terminados en 4 de la Matriz 1, se encuentra al menos 3 veces en la Matriz 2\n");
        } else {
            printf("\nEL promedio de los numeros terminados en 4 de la Matriz 1 no se encuentra 3 o mas veces en la Matriz 2\n");
        }
    } else {
        printf("\nNo hay números terminados en 4 en la Matriz 1\n");
    }

    return 0;
}
