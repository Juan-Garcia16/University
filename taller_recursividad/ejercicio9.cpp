/*9. Calculo del factorial de un numero entero positivo ingresado por teclado, recordar los máximos por tipo de dato.


SALVEDAD, A partir de 12 hay desbordamiento

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>

int factorial(int a){
    if (a == 0)
    {
        return 1;
    } else {
        return a * factorial(a-1);
    }
    
}

int main(){
    int num;

    while (true)
    {
        printf("Ingrese un numero entero positivo: ");
        scanf("%i", &num);

        if (num < 0)
        {
            printf("Debe ser un entero positivo");
        } else {
            break;
        }    
    }
    
    int resultado  = factorial(num);

    printf("%i! = %i\n", num, resultado);
    return 0;
}