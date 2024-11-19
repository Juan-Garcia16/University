/*
Ejercicio 6: Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y determinar cuántos divisores exactos tiene este último número entre los valores almacenados en el vector.
*/
#include <stdio.h>

int main(){
        int vec[10];
    int num;

    printf("Ingrese 10 valores uno por uno: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &vec[i]);
    }

    printf("\nIngrese un numero: ");
    scanf("%i", &num);

    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        if (num % vec[i] == 0)
        {
            contador++;
        }
    }

    printf("\n%i tiene %i divisores exactos entre los numeros del vector\n", num, contador);

    return 0;
    
}