/*6-. Rellenar un array de 10 números, posteriormente utilizando punteros indicar
cuáles y cuantos son números pares y su posición en memoria.

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <stdio.h>

void pares(int *pvec){
    for (int i = 0; i < 10; i++)
    {
        if (pvec[i] % 2 == 0)
        {
            printf("El %i es par, se encuentra en la posicion %p\n", pvec[i], &pvec[i]);
        }    
    }    
}

int main(){
    int vec[10];
    int *pvec = vec;

    printf("Ingrese 10 valores para llenar un vector: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &vec[i]);
    }
    
    pares(pvec);

    return 0;
}