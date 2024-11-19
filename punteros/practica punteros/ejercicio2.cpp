/*
2-. Escribir una función que sea capaz de ordenar en memoria dinámica, un arreglo de enteros, las funciones de recoger datos, ordenar y mostrar los datos, deben contener algún manejo de punteros.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Cuantos numeros desea ingresar: ");
    scanf("%i", &n);

    int *arr = (int*) malloc(n*sizeof(int));

    printf("Ingrese los %i datos: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }
    
    //ordenar los datos / burbuja
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            if (arr[i] > arr[i+1])
            {
                int aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
            }   
        }    
    }
    
    printf("\nLista de datos ordenada: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }

    free(arr);

    return 0;
}