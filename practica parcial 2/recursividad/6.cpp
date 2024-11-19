/*/6-. Sumar recursivamente, y sin usar (n(n+1))/2 los números del 1 al número n que le ingrese por teclado y
mayor que 1. Ej: n=5 1+2+3+4+5=15*/

#include <stdio.h>

int suma(int num2){
    if (num2 == 1)
    {
        return 1;
    } else {
        return num2 + suma(num2-1);
    }
    
}

int main(){
    int num2;

    while (true)
    {
        printf("Ingrese un numero mayor a 1: ");
        scanf("%i", &num2);

        if (num2 <= 1)
        {
            printf("\nDebe ser mayor a 1\n");
        } else {
            break;
        }   
    }

    int resultado = suma(num2);
    printf("La suma desde 1 hasta %i es: %i", num2, resultado);

    return 0;
}