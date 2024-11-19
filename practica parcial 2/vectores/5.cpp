/*
Ejercicio 5: Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y determinar si este último entero se encuentra entre los 10 valores almacenados en el vector.
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

    printf("\nIngrese un numero a buscar:: ");
    scanf("%i", &num);

    //busqueda
    int encontrado = 0;

    for (int i = 0; i < 10; i++)
    {
        if (num == vec[i])
        {
            encontrado = 1;
            break;
        }    
    }

    if (encontrado)
    {
        printf("\nEl numero se encuenctra en la lista\n");
    } else {
        printf("\nEl numero NO esta en la lista\n");
    }

    return 0;
}