/*5. Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y determinar si este último entero se encuentra entre los 10 valores almacenados en el vector.

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

    int entero;
    printf("\nIngrese un numero entero: ");
    scanf("%i", &entero);

    int validacion = 0;
    for (int i = 0; i < n; i++)
    {
        if (entero == vec[i])
        {
            validacion = 1;        
        }
        
    }
    
    if (validacion == 1)
    {
        printf("El %i se encuentra entre los numeros ingresados anteriormente\n", entero);
    } else {
        printf("El %i NO encuentra entre los numeros ingresados anteriormente\n", entero);
    }
    
    return 0;

}