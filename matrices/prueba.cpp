#include <stdio.h>
/*

//ingresar datos a una matriz

int main(){
    int A[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese un numeoro para A[%i][%i]\n", i, j);
            scanf("%i", &A[i][j]);
        }  
    }
    
    printf("Matriz :\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/

#include <stdlib.h>
#include <time.h>

//sumar dos matrices
int main(){
    int A[4][4];
    int B[4][4];
    int C[4][4];

    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            A[i][j] = rand() % 100;
        }
        
    }

        for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B[i][j] = rand() % 100;
        }
        
    }

    printf("Matriz A\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", A[i][j]);
        }
        printf("\n");
        
    }
    
        printf("Matriz B\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", B[i][j]);
        }
        printf("\n");
        
    }
    
            printf("Matriz C\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", A[i][j] + B[i][j]);
        }
        printf("\n");
        
    }

    return 0;

}