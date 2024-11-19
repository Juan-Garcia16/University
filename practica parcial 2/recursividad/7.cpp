#include <stdio.h>

// Función recursiva para verificar si un número es primo
int es_primo(int n, int divisor) {
    if (n <= 1) return 0; // No es primo si es menor o igual a 1
    if (divisor == 1) return 1; // Caso base: si llegamos a 1, es primo
    if (n % divisor == 0) return 0; // Si es divisible, no es primo
    return es_primo(n, divisor - 1); // Llamada recursiva con divisor decrementado
}

int main(){
    int num;

    // Solicitar un número mayor a 1
    while (1) {
        printf("Ingrese un numero mayor a 1: ");
        scanf("%i", &num);

        if (num <= 1) {
            printf("\nDebe ser mayor a 1\n");
        } else {
            break;
        }
    }

    // Imprimir los números primos desde 2 hasta el número ingresado
    printf("Los primos desde 1 hasta %i son: ", num);
    for (int i = 2; i <= num; i++) {
        if (es_primo(i, i - 1)) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}
