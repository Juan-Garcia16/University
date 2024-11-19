/*Realizar la carga de valores enteros por teclado y sumarlos. Cada vez que se carga un
valor pedir al operador que ingrese si quiere cargar otro valor ingresando una 's' o 'S'
(minúscula o mayúscula)*/

#include <stdio.h>

int main(){
    int suma = 0;
    int num = 0;
    char desicion;

    do
    {
        printf("Ingrese un valor entero para irlo sumando");
        scanf("%i", &num);
        suma += num;

        printf("\nDesea seguir sumando (S o s para si, cualquie letra para no)");
        scanf(" %c", &desicion);
    } while (desicion == 'S' || desicion == 's');

    printf("El acumulado es: ");
    printf("%i", suma);
    
}