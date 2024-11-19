/*En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben
procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Notas de cada alumno tres (3)(almacenar los datos en
estructuras paralelas)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la
condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota
está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.

VSC ver 1.93.1 septiembre 24/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

void condicion(float notas[3], char estado[15]){
    float promedio = (notas[0] + notas[1] + notas[2]) / 3;

    if (promedio >= 8) 
    {
        strcpy(estado, "Muy Bueno");
    } else if (promedio >= 4) 
    {
        strcpy(estado, "Bueno");
    } else {
        strcpy(estado, "Insuficiente");
    }
}

int main(){
    char matriz[4][31];
    float notas[4][3];
    char estados[4][15];

    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese nombre del alumno: ");
        fgets(matriz[i], sizeof(matriz[i]), stdin);
        matriz[i][strcspn(matriz[i], "\n")] = '\0';

        printf("Ingrese las 3 notas una por una: \n");
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &notas[i][j]);
        }
        getchar();    
    }

    int contador = 0;
    printf("\n\tListado de estudiantes\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", matriz[i]);
        printf("Notas: \n");
        for (int j = 0; j < 3; j++)
        {
            printf("%.1f ", notas[i][j]);
        }

        condicion(notas[i], estados[i]); 
        printf("\nCondicion: %s\n", estados[i]);

        if (strcmp(estados[i], "Muy Bueno") == 0) 
        {
            contador++;
        }
        
        printf("------------------------------\n");
    }

    if (contador > 0)
    {
        printf("\n%i alumnos tienen Muy Bueno\n", contador);
    } else {
        printf("\nNigun alumno cuenta con Muy Bueno\n");
    }
    
    return 0;
}
