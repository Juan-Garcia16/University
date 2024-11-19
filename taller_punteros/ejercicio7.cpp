/*7-. Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector.

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <stdio.h>
#include <stdlib.h>

void menor_elemento(int *pvec, int tamano){
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

    menor_elemento(vec, tamano);

    //apunta siempre al primer elemento
    printf("El menor elemento del vector es: %i\n", *vec);

    free(vec);
    return 0;
}
