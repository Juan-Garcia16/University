/*Ordenar un vector de 100 elementos con el metodo de seleccion

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

    

    inicio = clock();

    //se ordena el vector de menor a mayor con metodo de seleccion
    int k;
    int n,posicion_menor;
    int menor,AUX;

    for (int i = 0; i < TAM - 1; i++) {
        posicion_menor = i;
        for (int j = i + 1; j < TAM; j++) {
            if (vec[j] < vec[posicion_menor]) {
                posicion_menor = j; //encuentra el indice del menor elemento
            }
        }

        //intercambia el elemento actual con el menor encontrado
        AUX = vec[i];
        vec[i] = vec[posicion_menor];
        vec[posicion_menor] = AUX;
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

    printf("\n\nEl tiempo usado con metodo de seleccion fue: %f segundos\n", tiempo);

    return 0;

}