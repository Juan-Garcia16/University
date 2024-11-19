/*
Ejercicio 1: Leer 10 números enteros, almacenarlos en un vector y calcularle el factorial a cada uno de los números leídos almacenándolos en otro vector.

    Te ayudará a entender el manejo de vectores y cómo realizar operaciones sobre los elementos almacenados, además de reforzar el cálculo del factorial.

*/
#include <stdio.h>

int calc_factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}

int main(){
    int vec[10];
    int factorial[10];

    printf("Ingrese 10 numeros uno por uno: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &vec[i]);
    }

    printf("vector ingresado : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", vec[i]);
    }

    printf("\nVector de factoriales: \n");
    for (int i = 0; i < 10; i++)
    {
        factorial[i] = calc_factorial(vec[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", factorial[i]);
    }

    return 0;
}