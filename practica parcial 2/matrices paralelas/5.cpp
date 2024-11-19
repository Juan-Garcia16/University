/*
Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos
precios en un vector paralelo de tipo float.
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se
debe contar)
*/
#include <stdio.h>
#include <string.h>

int main(){
    char productos[5][30];
    float precios[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nIngrese el nombre del producto %i: ", i+1);
        fgets(productos[i], 30, stdin);
        productos[i][strcspn(productos[i], "\n")] = '\0';

        printf("Ingrese su precio: ");
        scanf("%f", &precios[i]);
        getchar();
    }

    int mayor = 0;
    for (int i = 1; i < 5; i++)
    {
        if (precios[i] > precios[0])
        {
            printf("El %s tiene un precio mayor al %s\n", productos[i], productos[0]);
            mayor++;
        }
        
    }

    if (mayor)
    {
        printf("\nEn total %i producots son mas caros que el primero\n");
        return 0;
    } else {
        printf("\nNo hay productos con mayor precio que el primero\n");
    }
    
    return 0;
    
    
}