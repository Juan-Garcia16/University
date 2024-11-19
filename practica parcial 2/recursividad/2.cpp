/*
//2. Hacer un programa que muestre y cuente la cantidad de divisores primos de un número.
*/
#include <stdio.h>

// Función recursiva para verificar si un número es primo
int es_primo(int n, int divisor) {
    if (n <= 1) return 0; // Casos no primos
    if (divisor < n) return 1; // Caso base: Si llegamos a 1, es primo
    if (n % divisor == 0) return 0; // Si es divisible, no es primo
    return es_primo(n, divisor + 1); // Llamada recursiva con divisor decrementado
}

// Función recursiva para contar y mostrar los divisores primos
int contar_divisores_primos(int num, int i) {
    if (i > num) return 0; // Caso base: si ya hemos revisado hasta el número

    // Si `i` es divisor y es primo
    if (num % i == 0 && es_primo(i, i - 1)) {
        printf("%i ", i);
        return 1 + contar_divisores_primos(num, i + 1); // Contar divisor primo
    }

    return contar_divisores_primos(num, i + 1); // Continuar buscando
}

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    printf("\nSus divisores primos son:\n");
    int total_primos = contar_divisores_primos(num, 2); // Iniciar con 2, el primer número primo

    printf("\n\nTotal de divisores primos: %i\n", total_primos);
    return 0;
}
