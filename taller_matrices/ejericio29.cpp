/*29. Leer una matriz 4x6 entera y determinar si alguno de sus números está repetido al menos 3 veces

Ver 5.11 septiembre 21/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int matriz[4][6];

    printf("Ingrese los valores para matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
        
    }

    printf("\nMatriz\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    //ciclo para contar las repeticiones
    int encontrado = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int repeticiones = 0;
            int numero = matriz[i][j];

            //ciclo para comparar cada numero con todos los de la
            for (int h = 0; h < 4; h++)
            {
                for (int k = 0; k < 6; k++)
                {
                    
                    if (numero == matriz[h][k])
                    {
                        repeticiones++;
                    }
                    
                }
                
            }

            if (repeticiones >= 3)
            {
                encontrado = 1;
            }            
        }       
    }

    if (encontrado >= 1)
    {
        printf("\nAl menos uno de sus numeros esta repetido 3 veces\n");
    } else {
        printf("\nNo hay algun numero que se repita 3 veces\n");
    }
    
    return 0;
}