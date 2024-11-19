/*
Ejercicio 19: Leer 10 números enteros, almacenarlos en un vector y determinar cuántos de los números almacenados en dicho vector pertenecen a los 100 primeros elementos de la serie de Fibonacci.
*/

#include <stdio.h>

int main(){
    int vec[10];

    printf("Ingrese 10 valores uno por uno\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &vec[i]);
    }

    //fibonacci
    int vec_fibo[100];
    vec_fibo[0] = 0;
    vec_fibo[1] = 1;

    for (int i = 2; i < 12; i++)
    {
        vec_fibo[i]= vec_fibo[i-1] + vec_fibo[i-2];
    }

    int contador = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (vec_fibo[j] == vec[i])
            {
                contador++;
            }
            
        }    
    }

    printf("\nHay %i numeros de la serie de fibonacci hasta el numero 100 en el vector\n", contador);

    return 0;    
}