/*6-. Problema propuesto:  De un conjunto de elementos enteros (mayor de 15) que se encuentran en un vector, (Generado y guardado) determinar cuál es la frecuencia de cada valor.  (Valor 1.0)

Se pide: 
a) crear un programa que lea el número de los elementos que contendrá un vector, con base en este número generar valores aleatorios que se guarden en el vector, luego ordenar por cualquier método, 

b) crear dos vectores adicionales, el primero contiene los valores individuales del vector origen y el segundo contendrá el valor de la frecuencia para cada valor, como se muestra en el ejemplo.

VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGO 50 // para tener más posibilidades de que se repitan números

// burbuja
void ordenar(int vector[], int cantidad) {
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

int main() {
    int cantidad;

    printf("Ingrese la cantidad de numeros (mayor de 15): ");
    scanf("%d", &cantidad);

    if (cantidad <= 15 || cantidad > 100) {
        printf("La cantidad debe ser mayor de 15 y menor o igual a 100\n");
        return 1;
    }

    int vector[cantidad]; 
    int frecuencias[RANGO] = {0}; 

    srand(time(NULL));

    // Generar números aleatorios y contar frecuencias
    printf("Vector generado:\n");
    for (int i = 0; i < cantidad; i++) {
        vector[i] = rand() % RANGO;
        printf("%i ", vector[i]);
        frecuencias[vector[i]]++; // Cuenta la frecuencia del numero generado
    }
    printf("\n");

    // Ordenar el vector
    ordenar(vector, cantidad);

    printf("\nVector ordenado:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%i ", vector[i]);
    }
    printf("\n");

    // Crear vectores adicionales para valores unicos y sus frecuencias
    int valores_unicos[RANGO];
    int frecuencias_unicas[RANGO];
    int contador = 0;

    // Llenar los vectores de valores únicos y sus frecuencias
    for (int i = 0; i < RANGO; i++) {
        if (frecuencias[i] > 0) {
            valores_unicos[contador] = i;
            frecuencias_unicas[contador] = frecuencias[i];
            contador++;
        }
    }

    // Imprimir los vectores generados
    printf("\nVectores generados:\n");
    printf("Elem\tFrec\n");
    for (int i = 0; i < contador; i++) {
        printf("%i\t%i\n", valores_unicos[i], frecuencias_unicas[i]);
    }

    return 0;
}

