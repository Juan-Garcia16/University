/*Realizar una busqueda binaria en un vector de 100 elementos

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

    //se ordena el vector de menor a mayor con metodo de burbuja
    for (int i = 0; i < TAM-1; i++)
    {
        for (int j = i+1; j < TAM; j++)
        {
            if(vec[i] > vec[j]){
                int aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
        
    }

    
    printf("\n\nVector ordenado de menor a mayor:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%i\t", vec[i]);
        if ((i+1) % 10 == 0)
        {
            printf("\n");
        }
        
    }

    int valor;

    printf("\nIngrese el numero del que desea su posicion ");
    scanf("%i", &valor);


    //busqueda binaria de "valor" en el vector

    inicio = clock();
    int alto,central,bajo;

    bajo=0;
    alto=TAM-1;
    central=(bajo+alto)/2;

    while(bajo <= alto && vec[central] != valor)
    {
        if(valor < vec[central]) alto = central-1;
        else bajo=central+1;

        central=(bajo+alto)/2;
    }

    fin = clock();

    tiempo = ((double) (fin - inicio)) / CLOCKS_PER_SEC; //constante que convierte los ciclos de cpu en segundos


    if(valor == vec[central]) printf("El valor se encuentra en la posicion %i",central);
    else printf("El valor no se encuentra en el vector");




    printf("\n\nEl tiempo usado con la busqueda binaria fue: %f segundos\n", tiempo);
    
return 0;
    
}
