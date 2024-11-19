/*1. Leer 10 números enteros, almacenarlos en un vector y calcularle el factorial a cada uno de los números leídos almacenándolos en otro vector.

Ver 5.11 septiembre 16/2024          Juan Pablo García
*/

#include <stdio.h>

int main(){
    int n = 10;
    int vec[n];

    printf("Ingrese 10 numeros enteros uno por uno: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &vec[i]);
    }
    
    //ciclo para calcular el factorial a cada posicion
    int factorial[n];
    for (int i = 0; i < n ; i++)
    {
        int aux = 1;   //asi se asegura el factorial de 0   
        for (int j = 1; j <= vec[i] ; j++)
        {
            aux *= j;
        }
        
        factorial[i] = aux;
        
    }

    printf("\nLos factoriales calculados fueron: \n");
    for (int i = 0; i < n; i++)
    {
        printf("!%i = ",vec[i]);
        printf("%i\n", factorial[i]);
    }
    
    return 0;
}