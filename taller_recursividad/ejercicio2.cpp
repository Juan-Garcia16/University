/*2. Hacer un programa que muestre y cuente la cantidad de divisores primos de un número

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>

int es_primo(int n, int divisor) {
    if (n <= 1) 
    {
        return 0; 
    }
    if (divisor * divisor > n)// no habrian mas divisores 
    {
        return 1; 
    }
    if (n % divisor == 0) 
    {
        return 0; 
    }

    return es_primo(n, divisor + 1); 
}

int contar_divisores_primos(int n, int divisor) {
    if (divisor > n) 
    {
        return 0;
    }

    if (n % divisor == 0 && es_primo(divisor, 2)) 
    {
        printf("%i ", divisor); 
        return 1 + contar_divisores_primos(n, divisor + 1); 
    }

    return contar_divisores_primos(n, divisor + 1);
}

int main() {
    int num;

    while (true)
    {
        printf("Ingrese un numero entero positivo: ");
        scanf("%i", &num);

        if (num <= 0)
        {
            printf("Ingrese un entero positivo\n\n");
        } else {
            break;
        }
        

    }
    
    printf("Divisores primos de %i: ", num);
    int cantidad = contar_divisores_primos(num, 2); //se comienza a contar desde el primer divisor primo (2)

    printf("\nCantidad de divisores primos: %i\n", cantidad);
    return 0;
}
