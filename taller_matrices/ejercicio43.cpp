/*43. Leer dos matrices 5x5 enteras y determinar si el promedio entero de los números pares de una matriz es igual al promedio de los números pares de la otra matriz.

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int matriz1[5][5];
    int matriz2[5][5];
    int suma_pares1 = 0, suma_pares2 = 0;
    int cuenta_pares1 = 0, cuenta_pares2 = 0;

    printf("Ingrese los valores para la primera matriz:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
            if (matriz1[i][j] % 2 == 0)
            {
                suma_pares1 += matriz1[i][j];
                cuenta_pares1++;
            }
        }
    }

    printf("Ingrese los valores para la segunda matriz:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
            if (matriz2[i][j] % 2 == 0)
            {
                suma_pares2 += matriz2[i][j];
                cuenta_pares2++;
            }
        }
    }

    int promedio_pares1 = 0;
    int promedio_pares2 = 0;

    if (cuenta_pares1 > 0) 
    {
        promedio_pares1 = suma_pares1 / cuenta_pares1;
    }

    if (cuenta_pares2 > 0) 
    {
        promedio_pares2 = suma_pares2 / cuenta_pares2;
    }

    if (promedio_pares1 == promedio_pares2)
    {
        printf("El promedio entero de los numeros pares de ambas matrices es igual: %i\n", promedio_pares1);
    } else {
        printf("Los promedios de los numeros pares de las matrices son diferentes: %i y %i\n", promedio_pares1, promedio_pares2);
    }

    return 0;
}
