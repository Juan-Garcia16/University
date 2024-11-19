/*
#include <stdio.h>

int main(){
    int filas = 5;
    int espacios = 8;

    for (int i = 1; i <= filas; i++)
    {
        //espacios
        for (int j = 1; j <= filas-i; j++)
        {
            printf("  ");
        }
        
        //puntos
        for (int j = 1; j <= i*2 - 1; j++)
        {
            printf(". ");
        }

        printf("\n");    
    }
    
    int base = 4;
    //inferior
    for (int i = 1; i <=base; i++)
    {
        printf(" ");
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= base-i+1; j++)
        {
            printf("\\./ ");
        }

        printf("\n");
    }
    
}

*/

#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Número de filas en la pirámide

    // Parte superior de la pirámide
    for (i = 1; i <= n; i++) {
        // Espacios en blanco
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Números
        for (j = 1; j <= 2 * (n - i + 1) - 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Parte inferior del reflejo de la pirámide
    for (i = 1; i < n; i++) {
        // Espacios en blanco
        for (j = 1; j <= n - i - 1; j++) {
            printf(" ");
        }
        // Números
        for (j = 1; j <= 2 * (i + 1) - 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
