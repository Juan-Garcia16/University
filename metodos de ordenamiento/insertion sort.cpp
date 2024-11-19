/*Ordenar un vector de 100 elementos con el metodo de inserción

VSC ver 1.93.1 septiembre 17/2024          Juan Pablo García
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(){
    int vec[TAM];
    int num;
    clock_t inicio,fin;
    double tiempo;

    //se llena el vector con 100 elementos
    srand(time(NULL));
    printf("Llenando arreglo con 100 numeros aleatorios del 0 al 200\n");
    for (int i = 0; i < TAM; i++)
    {
        vec[i] = rand() % 200;
    }

    printf("\nVector generado aleatoriamente:\n");
        for (int i = 0; i < TAM; i++)
    {
        printf("%i\t", vec[i]);
        if ((i+1) % 10 == 0)
        {
            printf("\n");
        }
    }

    int k;

    inicio = clock();

    //se ordena el vector de menor a mayor con metodo de insercion
    for (int j= 1; j < TAM;j++)
    {
        k=vec[j]; /* se toma K como el elemento j-esimo */
        for(int i = j - 1; i >= 0 && k < vec[i];i--)
        {
        vec[i+1]=vec[i];
        /* se sube una posición todos los elementos
        mayores que K, y se hace burbujear K */
        vec[i]=k;
        }
    }

    fin = clock();

    tiempo = ((double) (fin - inicio)) / CLOCKS_PER_SEC;

    printf("\n\nVector ordenado de menor a mayor:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%i\t", vec[i]);
        if ((i+1) % 10 == 0)
        {
            printf("\n");
        }
        
    }

    printf("\n\nEl tiempo usado con metodo de insercion fue: %f segundos\n", tiempo);

    return 0;

}