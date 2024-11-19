/*5-. Determinar si un número es primo o no; con punteros y además indicar en qué posición de memoria se guardó el número.

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <stdio.h>
#include <math.h>

int esPrimo(int *pnum) {
    if (*pnum <= 1) 
    {
        return 0; //lo numeros menores o iguales a 1 no son primos
    }

    for (int i = 2; i <= sqrt(*pnum); i++) 
    {
        if (*pnum % i == 0) 
        {
            return 0; //si tiene algun divisor no es primo
        }
    }

    return 1; //si no tiene divisores, es primo
}

int main(){
    int num, *pnum;
    pnum = &num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if (esPrimo(pnum))
    {
        printf("El %i es primo\n", *pnum);
    } else {
        printf("El %i NO es primo\n", *pnum);
    }    
    printf("Su posicion en memoria es: %p\n", pnum);

    return 0;    
}