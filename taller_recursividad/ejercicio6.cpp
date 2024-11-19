/*6. sumar recursivamente, y sin usar (n(n+1))/2 los números del 1 al número n que le ingrese por teclado y mayor que 1. Ej: n=5 1+2+3+4+5=15.

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>

int suma_numeros(int a){
    if (a == 0)
    {
        return 0;
    } else {
        return a + suma_numeros(a-1);
    }
    
}

int main(){
    int num;

    while (true)
    {
        printf("Ingrese un un entero positivo: ");
        scanf("%i", &num);

        if (num <= 1)
        {
            printf("Ingrese un numero mayor a 1\n\n");
        } else{
            break;
        }
        
    }
    
    int resultado = suma_numeros(num);

    for (int i = 1; i <= num; i++) {
        printf("%i", i);

        if (i < num)
        {
            printf("+");
        }
    }

    printf(" = %i", resultado);
    return 0;
    
}