/*
Ejercicio 9: Leer 10 números enteros, almacenarlos en un vector y determinar cuántas veces en el vector se encuentra el dígito 2.
*/
#include <stdio.h>

int main(){
    int vec[10];

    printf("Ingrese 10 valores uno por uno: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &vec[i]);
    }

    int contador = 0;
    for (int i = 0; i < 10; i++)
    {
        int num = vec[i];

        while (num > 0) 
        {
            if (num % 10 == 2)
            {
                contador++;
            }
            num /= 10;
        }   
    }

    printf("\nEl 2 esta %i veces en el vector\n", contador);
    return 0;
    
}