/*
1-. A partir de una lista de calificaciones de los estudiantes de primer semestre, acceder y mostrar la información correspondiente y su dirección de memoria a dicha lista, mediante el uso de funciones y apuntadores.
*/
#include <stdio.h>
#include <stdlib.h>

void mostrar_calificaciones(float *ptr){
    for (int i = 0; i < 5; i++)
    {
        printf("Nota %i: ", i+1);
        printf("%.1f", *ptr);
        printf("\tDireccion %i: ", i+1);
        printf("%p", ptr);
        printf("\n");
        ptr++;
    }
    
}

int main(){
    float calificaciones[5] = {4.5, 3.2, 5.0, 4.2, 2.1};
    float *ptr;
    ptr = calificaciones;

    mostrar_calificaciones(ptr);

    return 0;
}