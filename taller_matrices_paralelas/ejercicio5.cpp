/*Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos
precios en un vector paralelo de tipo float.
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se
debe contar)

VSC ver 1.93.1 septiembre 24/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

int precio_mayor(float precio[5]){
    int contador = 0;
    for (int i = 1; i < 5; i++)
    {
        if (precio[i] > precio[0])
        {
            contador++;
        }    
    }

    return contador;    
}

int main(){
    char matriz[5][31];
    float precio[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del producto: ");
        fgets(matriz[i], sizeof(matriz[i]), stdin);
        matriz[i][strcspn(matriz[i], "\n")] = '\0';

        printf("Ingrese su precio: ");
        scanf("%f", &precio[i]);
        getchar();
    }

        int resultado = precio_mayor(precio);

        printf("\nHay %i productos con un precio mayor al primer producto ingreado\n", resultado);

        return 0;
}

