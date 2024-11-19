/*8-. Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <stdio.h>
#include <stdlib.h>

void ordenamiento(int *pvec, int tamano){
    //burbuja
    for (int i = 0; i < tamano-1 ; i++)
    {
        for (int j = 0; j < tamano-i-1; j++)
        {
            if (pvec[j] > pvec[j+1])
            {
                int aux = pvec[j];
                pvec[j] = pvec[j+1];
                pvec[j+1] = aux;
            }   
        }   
    }
}

int main(){
    int tamano;

    printf("Cuantos numeros desea ingresar?: ");
    scanf("%i", &tamano);

    int *vec = (int*) malloc(tamano*sizeof(int));

    printf("\nIngrese los %i valores uno por uno:\n", tamano);
    for (int i = 0; i < tamano; i++)
    {
        scanf("%i", &vec[i]);
    }

    ordenamiento(vec, tamano);

    printf("\nNumeros ingresados de forma ascendente: \n");
    for (int i = 0; i < tamano; i++)
    {
        printf("%i ", vec[i]);
    }
    printf("\n");
    
    free(vec);
    return 0;
}