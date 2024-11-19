/*
Ejercicio 10: Leer 10 números enteros, almacenarlos en un vector y determinar si el promedio entero de dichos números es un número primo.
*/
#include <stdio.h>

int es_primo(int n){
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3  == 0) return 0;

    for (int i = 5; i*i<=n; i+=6)
    {
        if (n % i == 0 || n % (i+2) == 0)
        {
            return 0;
        }    
    }

    return 1;    
}

int main(){
    int vec[10];

    printf("Ingrese 10 numeros uno por uno: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &vec[i]);
    }

    int suma = 0;

    for (int i = 0; i < 10; i++)
    {
        suma += vec[i];
    }
    
    int promedio = suma / 10;

    if (es_primo(promedio))
    {
        printf("\nEl promedio %i es primo\n", promedio);
    } else {
        printf("\nEl promedio %i NO es primo\n", promedio);
    }
    
    return 0;
}