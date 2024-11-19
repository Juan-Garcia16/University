/*
En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben
procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Notas de cada alumno tres (3)(almacenar los datos en
estructuras paralelas)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la
condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota
está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.
*/
/*
ingresar nombre en matriz, y 3 notas por cada estudiante en otra matriz
listado con nombres y notas, donde muestre su estado
cuantos tienen muy bueno*/
#include <stdio.h>
#include <string.h>

int main(){
    char nombres[4][30];
    float notas[4][3];


    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese nombre del estudiante %i: ", i+1);
        fgets(nombres[i], 30, stdin);
        nombres[i][strcspn(nombres[i], "\n")] = '\0';

        printf("Ingrese las 3 notas del estudiante:\n");
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &notas[i][j]);
        }
        getchar();
    }

    float promedio = 0;
    int muy_bueno = 0;

    //mostrar datos y estado
    for (int i = 0; i < 4; i++)
    {
        float suma = 0;
        printf("\nEstudiante: %s\n", nombres[i]);
        printf("Notas: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", notas[i][j]);
        }
        
        printf("\nEstado: ");
        for (int j = 0; j < 3; j++)
        {
            suma += notas[i][j];
        }

        promedio = suma / 3;

        if (promedio >= 8)
        {
            printf("Muy bueno\n");
            muy_bueno++;
        } else if (promedio >= 4 && promedio < 8)
        {
            printf("Bueno\n");
        } else {
            printf("Insuficiente\n");
        }   

        printf("-------------------------");
    }
    
    if (muy_bueno > 0)
    {
        printf("\n%i alumnos tiene su estado en Muye Bueno\n", muy_bueno);
    } else {
        printf("\nNigun alumno tiene en su estado Muy Bueno\n");
    }

    return 0;
}